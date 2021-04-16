#ifndef CB_VISITOR
#define CB_VISITOR

#include"errorListener.h"

#include<map>
#include<string>
#include<stack>
#include<list>
#include<iostream>

#include<antlr4-runtime/antlr4-runtime.h>
#include"antlr/BasicLexer.h"
#include"antlr/BasicParser.h"
#include"antlr/BasicBaseVisitor.h"

#include<llvm/IR/DerivedTypes.h>
#include<llvm/IR/IRBuilder.h>
#include<llvm/IR/Function.h>
#include<llvm/IR/InstrTypes.h>
#include<llvm/IR/Instruction.h>
#include<llvm/IR/LLVMContext.h>
#include<llvm/IR/Module.h>
#include<llvm/IR/Verifier.h>
#include<llvm/Support/raw_ostream.h>
#include<llvm/Target/TargetMachine.h>
#include<llvm/ExecutionEngine/JITSymbol.h>
#include<llvm/ExecutionEngine/Orc/LLJIT.h>
#include<llvm/ExecutionEngine/Orc/CompileUtils.h>
#include<llvm/ExecutionEngine/Orc/Core.h>
#include<llvm/ExecutionEngine/Orc/JITTargetMachineBuilder.h>
#include<llvm/ExecutionEngine/Orc/ExecutionUtils.h>
#include<llvm/ExecutionEngine/Orc/IRCompileLayer.h>
#include<llvm/ExecutionEngine/Orc/RTDyldObjectLinkingLayer.h>
#include<llvm/ExecutionEngine/SectionMemoryManager.h>
#include<llvm/IR/DataLayout.h>
#include<llvm/ExecutionEngine/ExecutionEngine.h>
using namespace llvm;
using namespace std;
using namespace antlr4;

string strToLower(string str);

class Visitor;
class StackFrame;
class TypeTable;
class CodeGenerator;

class GenerateUnit{
    friend Visitor;
    llvm::Module mod;
    Visitor* visitor;
    stack<StackFrame> frame;
    LLVMContext& context;
    Reporter reporter;
    BasicErrorListener errorListener;
    CodeGenerator& gen;
    istream& in;
    ostream& out;
public:
    GenerateUnit(CodeGenerator& gen,string path,string name,istream& in,ostream& out);
    void generate();
    ~GenerateUnit(){
        delete visitor;
    }
};

class CodeGenerator{
    friend GenerateUnit;
    friend StackFrame;
    friend TypeTable;
    friend Visitor;
    LLVMContext context;
    TypeTable* typeTable;
    list<GenerateUnit*> units;
    Reporter* reporter=nullptr;
public:
    CodeGenerator();
    ~CodeGenerator(){
        delete typeTable;
        for(auto u:units)delete u;
    }
    GenerateUnit* CreateUnit(string path,istream& in,ostream& out){
        auto unit=new GenerateUnit(*this,path,path,in,out);
        units.push_back(unit);
        return unit;
    }
};

class TypeTable{
    CodeGenerator& gen;
    map<string,llvm::Type*> builtInTypes;
public:
    explicit TypeTable(CodeGenerator& generator);
    Type* find(Token* type);
};

class ArgumentInfo{
public:
    string name;
    Type* type;
    antlr4::tree::ParseTree* initial;
    ArgumentInfo(BasicParser::VariableContext *ctx,TypeTable& typeTable){
        name=strToLower(ctx->name->getText());
        type=typeTable.find(ctx->type->ID()->getSymbol());
        initial=ctx->initial;
    }
};

class StackFrame{
    int index=0;
    stack<string> layers;
public:
    llvm::Function* function;
    StackFrame(llvm::Function* function){
        this->function=function;
    }
    map<string,AllocaInst*> varTable;
    map<string,Argument*> argTable;
    Value* getValue(string name){

    }
    void BeginLayer(string prefix){
        layers.push(prefix + "_" + std::to_string(index) + "_");
        index++;
    }
    string getBlockName(string suffix){
        return layers.top()+suffix;
    }
    void EndLayer(){
        layers.pop();
    }

};

class Visitor:public BasicBaseVisitor{
    GenerateUnit& unit;
    IRBuilder<> builder;
    LLVMContext &context;
    llvm::Module& mod;
    stack<StackFrame>& frame;
    TypeTable& typeTable;
public:
    Visitor(GenerateUnit& unit);
    //=========================================== utility =================================================
    void visitBlock(vector<BasicParser::LineContext*>& block){
        for(auto& line:block)visit(line);
    }
    //=========================================== flow-control =================================================
    virtual antlrcpp::Any visitDoWhile(BasicParser::DoWhileContext *ctx) override;
    virtual antlrcpp::Any visitDoUntil(BasicParser::DoUntilContext *ctx) override;
    virtual antlrcpp::Any visitLoopUntil(BasicParser::LoopUntilContext *ctx) override;
    virtual antlrcpp::Any visitLoopWhile(BasicParser::LoopWhileContext *ctx) override;
    virtual antlrcpp::Any visitWhileWend(BasicParser::WhileWendContext *ctx) override;
    virtual antlrcpp::Any visitSingleLineIf(BasicParser::SingleLineIfContext *ctx) override;
    virtual antlrcpp::Any visitMutiLineIf(BasicParser::MutiLineIfContext *ctx) override;
    virtual antlrcpp::Any visitIfBlock(BasicParser::IfBlockContext *ctx) override;
    //============================================ declare ====================================================
    virtual antlrcpp::Any visitVarDecl(BasicParser::VarDeclContext *ctx) override;
    virtual antlrcpp::Any visitTypeDecl(BasicParser::TypeDeclContext *ctx) override;
    virtual antlrcpp::Any visitVariable(BasicParser::VariableContext *ctx) override;
    virtual antlrcpp::Any visitFunctionDecl(BasicParser::FunctionDeclContext *ctx) override;
    virtual antlrcpp::Any visitSubDecl(BasicParser::SubDeclContext *ctx) override;
    //====================================== call statement =========================================
    virtual antlrcpp::Any visitInnerCall(BasicParser::InnerCallContext *ctx) override;
    virtual antlrcpp::Any visitArgPassValue(BasicParser::ArgPassValueContext *ctx) override;
    virtual antlrcpp::Any visitArgIgnore(BasicParser::ArgIgnoreContext *ctx) override;
    virtual antlrcpp::Any visitArgOptional(BasicParser::ArgOptionalContext *ctx) override;
    virtual antlrcpp::Any visitReturnStmt(BasicParser::ReturnStmtContext *ctx) override;
    virtual antlrcpp::Any visitAssignStmt(BasicParser::AssignStmtContext *ctx) override;
    virtual antlrcpp::Any visitPluOp(BasicParser::PluOpContext *ctx) override;
    map<string,CmpInst::Predicate> cmpIntSigned={
        {"=",CmpInst::Predicate::ICMP_EQ},
        {"<>",CmpInst::Predicate::ICMP_NE},
        {"<",CmpInst::Predicate::ICMP_SLT},
        {"<=",CmpInst::Predicate::ICMP_SLE},
        {"=<",CmpInst::Predicate::ICMP_SLE},
        {">",CmpInst::Predicate::ICMP_SGT},
        {">=",CmpInst::Predicate::ICMP_SGE},
        {"=>",CmpInst::Predicate::ICMP_SGE}
    };
    virtual antlrcpp::Any visitCmpOp(BasicParser::CmpOpContext *ctx) override;
    virtual antlrcpp::Any visitLogicNotOp(BasicParser::LogicNotOpContext *ctx) override;
    virtual antlrcpp::Any visitNegOp(BasicParser::NegOpContext *ctx) override;
    virtual antlrcpp::Any visitString(BasicParser::StringContext *ctx) override;
    virtual antlrcpp::Any visitInteger(BasicParser::IntegerContext *ctx) override;
    virtual antlrcpp::Any visitDecimal(BasicParser::DecimalContext *ctx) override;
    virtual antlrcpp::Any visitBucket(BasicParser::BucketContext *ctx) override;
    virtual antlrcpp::Any visitMulOp(BasicParser::MulOpContext *ctx) override;
    virtual antlrcpp::Any visitPowModOp(BasicParser::PowModOpContext *ctx) override;
    virtual antlrcpp::Any visitID(BasicParser::IDContext *ctx) override;
    virtual antlrcpp::Any visitBoolean(BasicParser::BooleanContext *ctx) override;
    virtual antlrcpp::Any visitBitOp(BasicParser::BitOpContext *ctx) override;
    virtual antlrcpp::Any visitLogicOp(BasicParser::LogicOpContext *ctx) override;
};



#endif