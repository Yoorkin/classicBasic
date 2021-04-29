//
// Created by yorkin on 4/27/21.
//

#ifndef CLASSICBASIC_STRUCTUREGEN_H
#define CLASSICBASIC_STRUCTUREGEN_H

#include"errorListener.h"

#include<map>
#include<string>
#include<stack>
#include<list>
#include<iostream>

#include<antlr4-runtime/antlr4-runtime.h>
#include"../antlr/BasicLexer.h"
#include"../antlr/BasicParser.h"
#include"../antlr/BasicBaseVisitor.h"

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

#include"genUtility.h"

using namespace llvm;
using namespace std;
using namespace antlr4;
namespace classicBasic {

    class StructureVisitor : public BasicBaseVisitor {
    public:

        virtual antlrcpp::Any visitFunctionDecl(BasicParser::FunctionDeclContext *ctx) override {
            vector<structure::ParameterInfo*> paramList = visit(ctx->parameterList());

        }

        virtual antlrcpp::Any visitSubDecl(BasicParser::SubDeclContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual antlrcpp::Any visitExternalSub(BasicParser::ExternalSubContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual antlrcpp::Any visitExternalFunction(BasicParser::ExternalFunctionContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual antlrcpp::Any visitPropertyGet(BasicParser::PropertyGetContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual antlrcpp::Any visitPropertySet(BasicParser::PropertySetContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual antlrcpp::Any visitPropertyLet(BasicParser::PropertyLetContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual antlrcpp::Any visitEnumDecl(BasicParser::EnumDeclContext *ctx) override {
            return visitChildren(ctx);
        }
        virtual antlrcpp::Any visitEnumPair(BasicParser::EnumPairContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual antlrcpp::Any visitTypeDecl(BasicParser::TypeDeclContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual antlrcpp::Any visitVarDecl(BasicParser::VarDeclContext *ctx) override {
            return visitChildren(ctx);
        }
        virtual antlrcpp::Any visitVariable(BasicParser::VariableContext *ctx) override {
            return visitChildren(ctx);
        }
        virtual antlrcpp::Any visitNameTypePair(BasicParser::NameTypePairContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual antlrcpp::Any visitParameterList(BasicParser::ParameterListContext *ctx) override {
            map<string,structure::ParameterInfo*> args;
            for(auto child:ctx->necessaryParameter()){
                auto arg=visit(child).as<structure::ParameterInfo*>();
                args.insert(make_pair(arg->name,arg));
            }
            for(auto child:ctx->optionalParameter()){
                auto arg=visit(child).as<structure::ParameterInfo*>();
                args.insert(make_pair(arg->name,arg));
            }
            auto arg=visit(ctx->paramArrayParameter()).as<structure::ParameterInfo*>();
            args.insert(make_pair(arg->name,arg));
            return args;
        }
        virtual antlrcpp::Any visitNecessaryParameter(BasicParser::NecessaryParameterContext *ctx) override {
            auto info = new structure::ParameterInfo();
            info->type=TypeTable::find()
            return visitChildren(ctx);
        }
        virtual antlrcpp::Any visitOptionalParameter(BasicParser::OptionalParameterContext *ctx) override {
            return visitChildren(ctx);
        }
        virtual antlrcpp::Any visitParamArrayParameter(BasicParser::ParamArrayParameterContext *ctx) override {
            return visitChildren(ctx);
        }


    };
}
#endif //CLASSICBASIC_STRUCTUREGEN_H
