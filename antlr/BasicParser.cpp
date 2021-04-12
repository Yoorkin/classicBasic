
// Generated from Basic.g4 by ANTLR 4.9.1


#include "BasicVisitor.h"

#include "BasicParser.h"


using namespace antlrcpp;
using namespace antlr4;

BasicParser::BasicParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

BasicParser::~BasicParser() {
  delete _interpreter;
}

std::string BasicParser::getGrammarFileName() const {
  return "Basic.g4";
}

const std::vector<std::string>& BasicParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& BasicParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ModuleBodyContext ------------------------------------------------------------------

BasicParser::ModuleBodyContext::ModuleBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BasicParser::DeclareContext *> BasicParser::ModuleBodyContext::declare() {
  return getRuleContexts<BasicParser::DeclareContext>();
}

BasicParser::DeclareContext* BasicParser::ModuleBodyContext::declare(size_t i) {
  return getRuleContext<BasicParser::DeclareContext>(i);
}

std::vector<tree::TerminalNode *> BasicParser::ModuleBodyContext::LineEnd() {
  return getTokens(BasicParser::LineEnd);
}

tree::TerminalNode* BasicParser::ModuleBodyContext::LineEnd(size_t i) {
  return getToken(BasicParser::LineEnd, i);
}


size_t BasicParser::ModuleBodyContext::getRuleIndex() const {
  return BasicParser::RuleModuleBody;
}


antlrcpp::Any BasicParser::ModuleBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitModuleBody(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::ModuleBodyContext* BasicParser::moduleBody() {
  ModuleBodyContext *_localctx = _tracker.createInstance<ModuleBodyContext>(_ctx, getState());
  enterRule(_localctx, 0, BasicParser::RuleModuleBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 31) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
      | (1ULL << (BasicParser::Type - 31))
      | (1ULL << (BasicParser::Dim - 31))
      | (1ULL << (BasicParser::Function - 31))
      | (1ULL << (BasicParser::Sub - 31)))) != 0)) {
      setState(42);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BasicParser::Type:
        case BasicParser::Dim:
        case BasicParser::Function:
        case BasicParser::Sub: {
          setState(40);
          declare();
          break;
        }

        case BasicParser::LineEnd: {
          setState(41);
          match(BasicParser::LineEnd);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(46);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclareContext ------------------------------------------------------------------

BasicParser::DeclareContext::DeclareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasicParser::FunctionDeclContext* BasicParser::DeclareContext::functionDecl() {
  return getRuleContext<BasicParser::FunctionDeclContext>(0);
}

BasicParser::SubDeclContext* BasicParser::DeclareContext::subDecl() {
  return getRuleContext<BasicParser::SubDeclContext>(0);
}

BasicParser::VarDeclContext* BasicParser::DeclareContext::varDecl() {
  return getRuleContext<BasicParser::VarDeclContext>(0);
}

BasicParser::TypeDeclContext* BasicParser::DeclareContext::typeDecl() {
  return getRuleContext<BasicParser::TypeDeclContext>(0);
}


size_t BasicParser::DeclareContext::getRuleIndex() const {
  return BasicParser::RuleDeclare;
}


antlrcpp::Any BasicParser::DeclareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitDeclare(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::DeclareContext* BasicParser::declare() {
  DeclareContext *_localctx = _tracker.createInstance<DeclareContext>(_ctx, getState());
  enterRule(_localctx, 2, BasicParser::RuleDeclare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(51);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasicParser::Function: {
        enterOuterAlt(_localctx, 1);
        setState(47);
        functionDecl();
        break;
      }

      case BasicParser::Sub: {
        enterOuterAlt(_localctx, 2);
        setState(48);
        subDecl();
        break;
      }

      case BasicParser::Dim: {
        enterOuterAlt(_localctx, 3);
        setState(49);
        varDecl();
        break;
      }

      case BasicParser::Type: {
        enterOuterAlt(_localctx, 4);
        setState(50);
        typeDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclContext ------------------------------------------------------------------

BasicParser::TypeDeclContext::TypeDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BasicParser::TypeDeclContext::Type() {
  return getTokens(BasicParser::Type);
}

tree::TerminalNode* BasicParser::TypeDeclContext::Type(size_t i) {
  return getToken(BasicParser::Type, i);
}

tree::TerminalNode* BasicParser::TypeDeclContext::End() {
  return getToken(BasicParser::End, 0);
}

tree::TerminalNode* BasicParser::TypeDeclContext::ID() {
  return getToken(BasicParser::ID, 0);
}

std::vector<tree::TerminalNode *> BasicParser::TypeDeclContext::LineEnd() {
  return getTokens(BasicParser::LineEnd);
}

tree::TerminalNode* BasicParser::TypeDeclContext::LineEnd(size_t i) {
  return getToken(BasicParser::LineEnd, i);
}

std::vector<BasicParser::VariableContext *> BasicParser::TypeDeclContext::variable() {
  return getRuleContexts<BasicParser::VariableContext>();
}

BasicParser::VariableContext* BasicParser::TypeDeclContext::variable(size_t i) {
  return getRuleContext<BasicParser::VariableContext>(i);
}


size_t BasicParser::TypeDeclContext::getRuleIndex() const {
  return BasicParser::RuleTypeDecl;
}


antlrcpp::Any BasicParser::TypeDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitTypeDecl(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::TypeDeclContext* BasicParser::typeDecl() {
  TypeDeclContext *_localctx = _tracker.createInstance<TypeDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, BasicParser::RuleTypeDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(BasicParser::Type);
    setState(54);
    dynamic_cast<TypeDeclContext *>(_localctx)->name = match(BasicParser::ID);
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BasicParser::LineEnd

    || _la == BasicParser::ID) {
      setState(56);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BasicParser::ID) {
        setState(55);
        variable();
      }
      setState(58);
      match(BasicParser::LineEnd);
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(64);
    match(BasicParser::End);
    setState(65);
    match(BasicParser::Type);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

BasicParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::VarDeclContext::Dim() {
  return getToken(BasicParser::Dim, 0);
}

std::vector<BasicParser::VariableContext *> BasicParser::VarDeclContext::variable() {
  return getRuleContexts<BasicParser::VariableContext>();
}

BasicParser::VariableContext* BasicParser::VarDeclContext::variable(size_t i) {
  return getRuleContext<BasicParser::VariableContext>(i);
}


size_t BasicParser::VarDeclContext::getRuleIndex() const {
  return BasicParser::RuleVarDecl;
}


antlrcpp::Any BasicParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::VarDeclContext* BasicParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, BasicParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(BasicParser::Dim);
    setState(68);
    variable();
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BasicParser::T__0) {
      setState(69);
      match(BasicParser::T__0);
      setState(70);
      variable();
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

BasicParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::VariableContext::As() {
  return getToken(BasicParser::As, 0);
}

tree::TerminalNode* BasicParser::VariableContext::ID() {
  return getToken(BasicParser::ID, 0);
}

BasicParser::VarTypeContext* BasicParser::VariableContext::varType() {
  return getRuleContext<BasicParser::VarTypeContext>(0);
}

BasicParser::ExpContext* BasicParser::VariableContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}


size_t BasicParser::VariableContext::getRuleIndex() const {
  return BasicParser::RuleVariable;
}


antlrcpp::Any BasicParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::VariableContext* BasicParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 8, BasicParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    dynamic_cast<VariableContext *>(_localctx)->name = match(BasicParser::ID);
    setState(77);
    match(BasicParser::As);
    setState(78);
    dynamic_cast<VariableContext *>(_localctx)->type = varType();
    setState(81);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasicParser::T__1) {
      setState(79);
      match(BasicParser::T__1);
      setState(80);
      dynamic_cast<VariableContext *>(_localctx)->initial = exp(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

BasicParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BasicParser::FunctionDeclContext::Function() {
  return getTokens(BasicParser::Function);
}

tree::TerminalNode* BasicParser::FunctionDeclContext::Function(size_t i) {
  return getToken(BasicParser::Function, i);
}

tree::TerminalNode* BasicParser::FunctionDeclContext::As() {
  return getToken(BasicParser::As, 0);
}

tree::TerminalNode* BasicParser::FunctionDeclContext::End() {
  return getToken(BasicParser::End, 0);
}

std::vector<tree::TerminalNode *> BasicParser::FunctionDeclContext::ID() {
  return getTokens(BasicParser::ID);
}

tree::TerminalNode* BasicParser::FunctionDeclContext::ID(size_t i) {
  return getToken(BasicParser::ID, i);
}

std::vector<BasicParser::VariableContext *> BasicParser::FunctionDeclContext::variable() {
  return getRuleContexts<BasicParser::VariableContext>();
}

BasicParser::VariableContext* BasicParser::FunctionDeclContext::variable(size_t i) {
  return getRuleContext<BasicParser::VariableContext>(i);
}

std::vector<BasicParser::StatementContext *> BasicParser::FunctionDeclContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::FunctionDeclContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}


size_t BasicParser::FunctionDeclContext::getRuleIndex() const {
  return BasicParser::RuleFunctionDecl;
}


antlrcpp::Any BasicParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::FunctionDeclContext* BasicParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, BasicParser::RuleFunctionDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(BasicParser::Function);
    setState(84);
    dynamic_cast<FunctionDeclContext *>(_localctx)->name = match(BasicParser::ID);
    setState(85);
    match(BasicParser::T__2);
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasicParser::ID) {
      setState(86);
      variable();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BasicParser::T__0) {
        setState(87);
        match(BasicParser::T__0);
        setState(88);
        variable();
        setState(93);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(96);
    match(BasicParser::T__3);
    setState(97);
    match(BasicParser::As);
    setState(98);
    dynamic_cast<FunctionDeclContext *>(_localctx)->returnType = match(BasicParser::ID);
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 31) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
      | (1ULL << (BasicParser::If - 31))
      | (1ULL << (BasicParser::Dim - 31))
      | (1ULL << (BasicParser::Return - 31))
      | (1ULL << (BasicParser::Exit - 31))
      | (1ULL << (BasicParser::While - 31))
      | (1ULL << (BasicParser::Do - 31))
      | (1ULL << (BasicParser::For - 31))
      | (1ULL << (BasicParser::Call - 31))
      | (1ULL << (BasicParser::ID - 31)))) != 0)) {
      setState(99);
      statement();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
    match(BasicParser::End);
    setState(106);
    match(BasicParser::Function);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubDeclContext ------------------------------------------------------------------

BasicParser::SubDeclContext::SubDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BasicParser::SubDeclContext::Sub() {
  return getTokens(BasicParser::Sub);
}

tree::TerminalNode* BasicParser::SubDeclContext::Sub(size_t i) {
  return getToken(BasicParser::Sub, i);
}

tree::TerminalNode* BasicParser::SubDeclContext::End() {
  return getToken(BasicParser::End, 0);
}

tree::TerminalNode* BasicParser::SubDeclContext::ID() {
  return getToken(BasicParser::ID, 0);
}

std::vector<BasicParser::StatementContext *> BasicParser::SubDeclContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::SubDeclContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}

std::vector<BasicParser::VariableContext *> BasicParser::SubDeclContext::variable() {
  return getRuleContexts<BasicParser::VariableContext>();
}

BasicParser::VariableContext* BasicParser::SubDeclContext::variable(size_t i) {
  return getRuleContext<BasicParser::VariableContext>(i);
}


size_t BasicParser::SubDeclContext::getRuleIndex() const {
  return BasicParser::RuleSubDecl;
}


antlrcpp::Any BasicParser::SubDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitSubDecl(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::SubDeclContext* BasicParser::subDecl() {
  SubDeclContext *_localctx = _tracker.createInstance<SubDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, BasicParser::RuleSubDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(BasicParser::Sub);
    setState(109);
    dynamic_cast<SubDeclContext *>(_localctx)->name = match(BasicParser::ID);
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasicParser::T__2) {
      setState(110);
      match(BasicParser::T__2);
      setState(119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BasicParser::ID) {
        setState(111);
        variable();
        setState(116);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BasicParser::T__0) {
          setState(112);
          match(BasicParser::T__0);
          setState(113);
          variable();
          setState(118);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(121);
      match(BasicParser::T__3);
    }
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 31) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
      | (1ULL << (BasicParser::If - 31))
      | (1ULL << (BasicParser::Dim - 31))
      | (1ULL << (BasicParser::Return - 31))
      | (1ULL << (BasicParser::Exit - 31))
      | (1ULL << (BasicParser::While - 31))
      | (1ULL << (BasicParser::Do - 31))
      | (1ULL << (BasicParser::For - 31))
      | (1ULL << (BasicParser::Call - 31))
      | (1ULL << (BasicParser::ID - 31)))) != 0)) {
      setState(124);
      statement();
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(130);
    match(BasicParser::End);
    setState(131);
    match(BasicParser::Sub);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarTypeContext ------------------------------------------------------------------

BasicParser::VarTypeContext::VarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::VarTypeContext::ID() {
  return getToken(BasicParser::ID, 0);
}


size_t BasicParser::VarTypeContext::getRuleIndex() const {
  return BasicParser::RuleVarType;
}


antlrcpp::Any BasicParser::VarTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitVarType(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::VarTypeContext* BasicParser::varType() {
  VarTypeContext *_localctx = _tracker.createInstance<VarTypeContext>(_ctx, getState());
  enterRule(_localctx, 14, BasicParser::RuleVarType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(BasicParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BasicParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasicParser::ForStmtContext* BasicParser::StatementContext::forStmt() {
  return getRuleContext<BasicParser::ForStmtContext>(0);
}

BasicParser::LoopStmtContext* BasicParser::StatementContext::loopStmt() {
  return getRuleContext<BasicParser::LoopStmtContext>(0);
}

BasicParser::IfStmtContext* BasicParser::StatementContext::ifStmt() {
  return getRuleContext<BasicParser::IfStmtContext>(0);
}

tree::TerminalNode* BasicParser::StatementContext::LineEnd() {
  return getToken(BasicParser::LineEnd, 0);
}

BasicParser::ExitStmtContext* BasicParser::StatementContext::exitStmt() {
  return getRuleContext<BasicParser::ExitStmtContext>(0);
}

BasicParser::ReturnStmtContext* BasicParser::StatementContext::returnStmt() {
  return getRuleContext<BasicParser::ReturnStmtContext>(0);
}

BasicParser::AssignStmtContext* BasicParser::StatementContext::assignStmt() {
  return getRuleContext<BasicParser::AssignStmtContext>(0);
}

BasicParser::CallStmtContext* BasicParser::StatementContext::callStmt() {
  return getRuleContext<BasicParser::CallStmtContext>(0);
}

BasicParser::VarDeclContext* BasicParser::StatementContext::varDecl() {
  return getRuleContext<BasicParser::VarDeclContext>(0);
}


size_t BasicParser::StatementContext::getRuleIndex() const {
  return BasicParser::RuleStatement;
}


antlrcpp::Any BasicParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::StatementContext* BasicParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 16, BasicParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(144);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(135);
      forStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(136);
      loopStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(137);
      ifStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(138);
      match(BasicParser::LineEnd);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(139);
      exitStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(140);
      returnStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(141);
      assignStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(142);
      callStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(143);
      varDecl();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallStmtContext ------------------------------------------------------------------

BasicParser::CallStmtContext::CallStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::CallStmtContext::Call() {
  return getToken(BasicParser::Call, 0);
}

tree::TerminalNode* BasicParser::CallStmtContext::ID() {
  return getToken(BasicParser::ID, 0);
}

std::vector<BasicParser::PassArgContext *> BasicParser::CallStmtContext::passArg() {
  return getRuleContexts<BasicParser::PassArgContext>();
}

BasicParser::PassArgContext* BasicParser::CallStmtContext::passArg(size_t i) {
  return getRuleContext<BasicParser::PassArgContext>(i);
}


size_t BasicParser::CallStmtContext::getRuleIndex() const {
  return BasicParser::RuleCallStmt;
}


antlrcpp::Any BasicParser::CallStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitCallStmt(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::CallStmtContext* BasicParser::callStmt() {
  CallStmtContext *_localctx = _tracker.createInstance<CallStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, BasicParser::RuleCallStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasicParser::Call: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        match(BasicParser::Call);
        setState(147);
        match(BasicParser::ID);
        setState(148);
        match(BasicParser::T__2);
        setState(157);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          setState(149);
          passArg();
          setState(154);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == BasicParser::T__0) {
            setState(150);
            match(BasicParser::T__0);
            setState(151);
            passArg();
            setState(156);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          break;
        }

        default:
          break;
        }
        setState(159);
        match(BasicParser::T__3);
        break;
      }

      case BasicParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(160);
        match(BasicParser::ID);
        setState(169);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          setState(161);
          passArg();
          setState(166);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == BasicParser::T__0) {
            setState(162);
            match(BasicParser::T__0);
            setState(163);
            passArg();
            setState(168);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          break;
        }

        default:
          break;
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PassArgContext ------------------------------------------------------------------

BasicParser::PassArgContext::PassArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BasicParser::PassArgContext::getRuleIndex() const {
  return BasicParser::RulePassArg;
}

void BasicParser::PassArgContext::copyFrom(PassArgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArgIgnoreContext ------------------------------------------------------------------

BasicParser::ArgIgnoreContext::ArgIgnoreContext(PassArgContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::ArgIgnoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitArgIgnore(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgOptionalContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::ArgOptionalContext::ID() {
  return getToken(BasicParser::ID, 0);
}

BasicParser::ExpContext* BasicParser::ArgOptionalContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

BasicParser::ArgOptionalContext::ArgOptionalContext(PassArgContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::ArgOptionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitArgOptional(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgPassValueContext ------------------------------------------------------------------

BasicParser::ExpContext* BasicParser::ArgPassValueContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

BasicParser::ArgPassValueContext::ArgPassValueContext(PassArgContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::ArgPassValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitArgPassValue(this);
  else
    return visitor->visitChildren(this);
}
BasicParser::PassArgContext* BasicParser::passArg() {
  PassArgContext *_localctx = _tracker.createInstance<PassArgContext>(_ctx, getState());
  enterRule(_localctx, 20, BasicParser::RulePassArg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PassArgContext *>(_tracker.createInstance<BasicParser::ArgPassValueContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(173);
      dynamic_cast<ArgPassValueContext *>(_localctx)->value = exp(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PassArgContext *>(_tracker.createInstance<BasicParser::ArgIgnoreContext>(_localctx));
      enterOuterAlt(_localctx, 2);

      break;
    }

    case 3: {
      _localctx = dynamic_cast<PassArgContext *>(_tracker.createInstance<BasicParser::ArgOptionalContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(175);
      dynamic_cast<ArgOptionalContext *>(_localctx)->option = match(BasicParser::ID);
      setState(176);
      _la = _input->LA(1);
      if (!(_la == BasicParser::T__1

      || _la == BasicParser::T__4)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(177);
      dynamic_cast<ArgOptionalContext *>(_localctx)->value = exp(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignStmtContext ------------------------------------------------------------------

BasicParser::AssignStmtContext::AssignStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::AssignStmtContext::ID() {
  return getToken(BasicParser::ID, 0);
}

BasicParser::ExpContext* BasicParser::AssignStmtContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}


size_t BasicParser::AssignStmtContext::getRuleIndex() const {
  return BasicParser::RuleAssignStmt;
}


antlrcpp::Any BasicParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::AssignStmtContext* BasicParser::assignStmt() {
  AssignStmtContext *_localctx = _tracker.createInstance<AssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 22, BasicParser::RuleAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(BasicParser::ID);
    setState(181);
    match(BasicParser::T__1);
    setState(182);
    exp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExitStmtContext ------------------------------------------------------------------

BasicParser::ExitStmtContext::ExitStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::ExitStmtContext::Exit() {
  return getToken(BasicParser::Exit, 0);
}

tree::TerminalNode* BasicParser::ExitStmtContext::For() {
  return getToken(BasicParser::For, 0);
}

tree::TerminalNode* BasicParser::ExitStmtContext::Do() {
  return getToken(BasicParser::Do, 0);
}

tree::TerminalNode* BasicParser::ExitStmtContext::Sub() {
  return getToken(BasicParser::Sub, 0);
}

tree::TerminalNode* BasicParser::ExitStmtContext::Function() {
  return getToken(BasicParser::Function, 0);
}


size_t BasicParser::ExitStmtContext::getRuleIndex() const {
  return BasicParser::RuleExitStmt;
}


antlrcpp::Any BasicParser::ExitStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitExitStmt(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::ExitStmtContext* BasicParser::exitStmt() {
  ExitStmtContext *_localctx = _tracker.createInstance<ExitStmtContext>(_ctx, getState());
  enterRule(_localctx, 24, BasicParser::RuleExitStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(BasicParser::Exit);
    setState(185);
    dynamic_cast<ExitStmtContext *>(_localctx)->exitFlag = _input->LT(1);
    _la = _input->LA(1);
    if (!(((((_la - 55) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 55)) & ((1ULL << (BasicParser::Function - 55))
      | (1ULL << (BasicParser::Do - 55))
      | (1ULL << (BasicParser::For - 55))
      | (1ULL << (BasicParser::Sub - 55)))) != 0))) {
      dynamic_cast<ExitStmtContext *>(_localctx)->exitFlag = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

BasicParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::ReturnStmtContext::Return() {
  return getToken(BasicParser::Return, 0);
}

BasicParser::ExpContext* BasicParser::ReturnStmtContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

tree::TerminalNode* BasicParser::ReturnStmtContext::ID() {
  return getToken(BasicParser::ID, 0);
}


size_t BasicParser::ReturnStmtContext::getRuleIndex() const {
  return BasicParser::RuleReturnStmt;
}


antlrcpp::Any BasicParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::ReturnStmtContext* BasicParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, BasicParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(192);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasicParser::Return: {
        enterOuterAlt(_localctx, 1);
        setState(187);
        match(BasicParser::Return);
        setState(188);
        exp(0);
        break;
      }

      case BasicParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(189);
        dynamic_cast<ReturnStmtContext *>(_localctx)->name = match(BasicParser::ID);
        setState(190);
        match(BasicParser::T__1);
        setState(191);
        exp(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

BasicParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BasicParser::ExpContext::getRuleIndex() const {
  return BasicParser::RuleExp;
}

void BasicParser::ExpContext::copyFrom(ExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PluOpContext ------------------------------------------------------------------

std::vector<BasicParser::ExpContext *> BasicParser::PluOpContext::exp() {
  return getRuleContexts<BasicParser::ExpContext>();
}

BasicParser::ExpContext* BasicParser::PluOpContext::exp(size_t i) {
  return getRuleContext<BasicParser::ExpContext>(i);
}

BasicParser::PluOpContext::PluOpContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::PluOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitPluOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CmpOpContext ------------------------------------------------------------------

std::vector<BasicParser::ExpContext *> BasicParser::CmpOpContext::exp() {
  return getRuleContexts<BasicParser::ExpContext>();
}

BasicParser::ExpContext* BasicParser::CmpOpContext::exp(size_t i) {
  return getRuleContext<BasicParser::ExpContext>(i);
}

BasicParser::CmpOpContext::CmpOpContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::CmpOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitCmpOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicNotOpContext ------------------------------------------------------------------

BasicParser::ExpContext* BasicParser::LogicNotOpContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

BasicParser::LogicNotOpContext::LogicNotOpContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::LogicNotOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitLogicNotOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InnerCallContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::InnerCallContext::ID() {
  return getToken(BasicParser::ID, 0);
}

std::vector<BasicParser::PassArgContext *> BasicParser::InnerCallContext::passArg() {
  return getRuleContexts<BasicParser::PassArgContext>();
}

BasicParser::PassArgContext* BasicParser::InnerCallContext::passArg(size_t i) {
  return getRuleContext<BasicParser::PassArgContext>(i);
}

BasicParser::InnerCallContext::InnerCallContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::InnerCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitInnerCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegOpContext ------------------------------------------------------------------

BasicParser::ExpContext* BasicParser::NegOpContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

BasicParser::NegOpContext::NegOpContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::NegOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitNegOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::StringContext::String() {
  return getToken(BasicParser::String, 0);
}

BasicParser::StringContext::StringContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::NumberContext::Number() {
  return getToken(BasicParser::Number, 0);
}

BasicParser::NumberContext::NumberContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BucketContext ------------------------------------------------------------------

BasicParser::ExpContext* BasicParser::BucketContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

BasicParser::BucketContext::BucketContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::BucketContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitBucket(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulOpContext ------------------------------------------------------------------

std::vector<BasicParser::ExpContext *> BasicParser::MulOpContext::exp() {
  return getRuleContexts<BasicParser::ExpContext>();
}

BasicParser::ExpContext* BasicParser::MulOpContext::exp(size_t i) {
  return getRuleContext<BasicParser::ExpContext>(i);
}

BasicParser::MulOpContext::MulOpContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowModOpContext ------------------------------------------------------------------

std::vector<BasicParser::ExpContext *> BasicParser::PowModOpContext::exp() {
  return getRuleContexts<BasicParser::ExpContext>();
}

BasicParser::ExpContext* BasicParser::PowModOpContext::exp(size_t i) {
  return getRuleContext<BasicParser::ExpContext>(i);
}

BasicParser::PowModOpContext::PowModOpContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::PowModOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitPowModOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IDContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::IDContext::ID() {
  return getToken(BasicParser::ID, 0);
}

BasicParser::IDContext::IDContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::IDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitID(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::BooleanContext::Boolean() {
  return getToken(BasicParser::Boolean, 0);
}

BasicParser::BooleanContext::BooleanContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitOpContext ------------------------------------------------------------------

std::vector<BasicParser::ExpContext *> BasicParser::BitOpContext::exp() {
  return getRuleContexts<BasicParser::ExpContext>();
}

BasicParser::ExpContext* BasicParser::BitOpContext::exp(size_t i) {
  return getRuleContext<BasicParser::ExpContext>(i);
}

BasicParser::BitOpContext::BitOpContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::BitOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitBitOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicOpContext ------------------------------------------------------------------

std::vector<BasicParser::ExpContext *> BasicParser::LogicOpContext::exp() {
  return getRuleContexts<BasicParser::ExpContext>();
}

BasicParser::ExpContext* BasicParser::LogicOpContext::exp(size_t i) {
  return getRuleContext<BasicParser::ExpContext>(i);
}

BasicParser::LogicOpContext::LogicOpContext(ExpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::LogicOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitLogicOp(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::ExpContext* BasicParser::exp() {
   return exp(0);
}

BasicParser::ExpContext* BasicParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BasicParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  BasicParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, BasicParser::RuleExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NegOpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(195);
      match(BasicParser::T__5);
      setState(196);
      dynamic_cast<NegOpContext *>(_localctx)->right = exp(14);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LogicNotOpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(197);
      dynamic_cast<LogicNotOpContext *>(_localctx)->op = match(BasicParser::T__21);
      setState(198);
      dynamic_cast<LogicNotOpContext *>(_localctx)->right = exp(8);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<InnerCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(199);
      match(BasicParser::ID);
      setState(200);
      match(BasicParser::T__2);
      setState(209);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(201);
        passArg();
        setState(206);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BasicParser::T__0) {
          setState(202);
          match(BasicParser::T__0);
          setState(203);
          passArg();
          setState(208);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      default:
        break;
      }
      setState(211);
      match(BasicParser::T__3);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<BucketContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(212);
      match(BasicParser::T__2);
      setState(213);
      exp(0);
      setState(214);
      match(BasicParser::T__3);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(216);
      match(BasicParser::Number);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(217);
      match(BasicParser::String);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<IDContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(218);
      match(BasicParser::ID);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<BooleanContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(219);
      match(BasicParser::Boolean);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(242);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(240);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BitOpContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(222);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(223);
          dynamic_cast<BitOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BasicParser::T__6

          || _la == BasicParser::T__7)) {
            dynamic_cast<BitOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(224);
          dynamic_cast<BitOpContext *>(_localctx)->right = exp(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PowModOpContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(225);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(226);
          dynamic_cast<PowModOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BasicParser::T__8

          || _la == BasicParser::T__9)) {
            dynamic_cast<PowModOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(227);
          dynamic_cast<PowModOpContext *>(_localctx)->right = exp(13);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MulOpContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(228);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(229);
          dynamic_cast<MulOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << BasicParser::T__10)
            | (1ULL << BasicParser::T__11)
            | (1ULL << BasicParser::T__12))) != 0))) {
            dynamic_cast<MulOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(230);
          dynamic_cast<MulOpContext *>(_localctx)->right = exp(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PluOpContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(231);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(232);
          dynamic_cast<PluOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BasicParser::T__5

          || _la == BasicParser::T__13)) {
            dynamic_cast<PluOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(233);
          dynamic_cast<PluOpContext *>(_localctx)->right = exp(11);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<CmpOpContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(234);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(235);
          dynamic_cast<CmpOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << BasicParser::T__1)
            | (1ULL << BasicParser::T__14)
            | (1ULL << BasicParser::T__15)
            | (1ULL << BasicParser::T__16)
            | (1ULL << BasicParser::T__17)
            | (1ULL << BasicParser::T__18)
            | (1ULL << BasicParser::T__19)
            | (1ULL << BasicParser::T__20))) != 0))) {
            dynamic_cast<CmpOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(236);
          dynamic_cast<CmpOpContext *>(_localctx)->right = exp(10);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LogicOpContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(237);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(238);
          dynamic_cast<LogicOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << BasicParser::T__22)
            | (1ULL << BasicParser::T__23)
            | (1ULL << BasicParser::T__24))) != 0))) {
            dynamic_cast<LogicOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(239);
          dynamic_cast<LogicOpContext *>(_localctx)->right = exp(8);
          break;
        }

        default:
          break;
        } 
      }
      setState(244);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

BasicParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::ForStmtContext::For() {
  return getToken(BasicParser::For, 0);
}

tree::TerminalNode* BasicParser::ForStmtContext::To() {
  return getToken(BasicParser::To, 0);
}

tree::TerminalNode* BasicParser::ForStmtContext::Step() {
  return getToken(BasicParser::Step, 0);
}

tree::TerminalNode* BasicParser::ForStmtContext::Next() {
  return getToken(BasicParser::Next, 0);
}

std::vector<BasicParser::ExpContext *> BasicParser::ForStmtContext::exp() {
  return getRuleContexts<BasicParser::ExpContext>();
}

BasicParser::ExpContext* BasicParser::ForStmtContext::exp(size_t i) {
  return getRuleContext<BasicParser::ExpContext>(i);
}

std::vector<BasicParser::StatementContext *> BasicParser::ForStmtContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::ForStmtContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}


size_t BasicParser::ForStmtContext::getRuleIndex() const {
  return BasicParser::RuleForStmt;
}


antlrcpp::Any BasicParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::ForStmtContext* BasicParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 30, BasicParser::RuleForStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(BasicParser::For);
    setState(246);
    dynamic_cast<ForStmtContext *>(_localctx)->iterator = exp(0);
    setState(247);
    match(BasicParser::T__1);
    setState(248);
    dynamic_cast<ForStmtContext *>(_localctx)->begin = exp(0);
    setState(249);
    match(BasicParser::To);
    setState(250);
    dynamic_cast<ForStmtContext *>(_localctx)->end = exp(0);
    setState(251);
    match(BasicParser::Step);
    setState(252);
    dynamic_cast<ForStmtContext *>(_localctx)->step = exp(0);
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 31) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
      | (1ULL << (BasicParser::If - 31))
      | (1ULL << (BasicParser::Dim - 31))
      | (1ULL << (BasicParser::Return - 31))
      | (1ULL << (BasicParser::Exit - 31))
      | (1ULL << (BasicParser::While - 31))
      | (1ULL << (BasicParser::Do - 31))
      | (1ULL << (BasicParser::For - 31))
      | (1ULL << (BasicParser::Call - 31))
      | (1ULL << (BasicParser::ID - 31)))) != 0)) {
      setState(253);
      statement();
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(259);
    match(BasicParser::Next);
    setState(261);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(260);
      dynamic_cast<ForStmtContext *>(_localctx)->nextFlag = exp(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachStmtContext ------------------------------------------------------------------

BasicParser::ForeachStmtContext::ForeachStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::ForeachStmtContext::For() {
  return getToken(BasicParser::For, 0);
}

tree::TerminalNode* BasicParser::ForeachStmtContext::Each() {
  return getToken(BasicParser::Each, 0);
}

tree::TerminalNode* BasicParser::ForeachStmtContext::In() {
  return getToken(BasicParser::In, 0);
}

tree::TerminalNode* BasicParser::ForeachStmtContext::Next() {
  return getToken(BasicParser::Next, 0);
}

std::vector<BasicParser::ExpContext *> BasicParser::ForeachStmtContext::exp() {
  return getRuleContexts<BasicParser::ExpContext>();
}

BasicParser::ExpContext* BasicParser::ForeachStmtContext::exp(size_t i) {
  return getRuleContext<BasicParser::ExpContext>(i);
}

std::vector<BasicParser::StatementContext *> BasicParser::ForeachStmtContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::ForeachStmtContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}


size_t BasicParser::ForeachStmtContext::getRuleIndex() const {
  return BasicParser::RuleForeachStmt;
}


antlrcpp::Any BasicParser::ForeachStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitForeachStmt(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::ForeachStmtContext* BasicParser::foreachStmt() {
  ForeachStmtContext *_localctx = _tracker.createInstance<ForeachStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, BasicParser::RuleForeachStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(BasicParser::For);
    setState(264);
    match(BasicParser::Each);
    setState(265);
    dynamic_cast<ForeachStmtContext *>(_localctx)->iterator = exp(0);
    setState(266);
    match(BasicParser::In);
    setState(267);
    dynamic_cast<ForeachStmtContext *>(_localctx)->group = exp(0);
    setState(271);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 31) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
      | (1ULL << (BasicParser::If - 31))
      | (1ULL << (BasicParser::Dim - 31))
      | (1ULL << (BasicParser::Return - 31))
      | (1ULL << (BasicParser::Exit - 31))
      | (1ULL << (BasicParser::While - 31))
      | (1ULL << (BasicParser::Do - 31))
      | (1ULL << (BasicParser::For - 31))
      | (1ULL << (BasicParser::Call - 31))
      | (1ULL << (BasicParser::ID - 31)))) != 0)) {
      setState(268);
      statement();
      setState(273);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(274);
    match(BasicParser::Next);
    setState(276);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BasicParser::T__2)
      | (1ULL << BasicParser::T__5)
      | (1ULL << BasicParser::T__21)
      | (1ULL << BasicParser::Number)
      | (1ULL << BasicParser::String)
      | (1ULL << BasicParser::Boolean))) != 0) || _la == BasicParser::ID) {
      setState(275);
      dynamic_cast<ForeachStmtContext *>(_localctx)->nextFlag = exp(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

BasicParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BasicParser::IfStmtContext::getRuleIndex() const {
  return BasicParser::RuleIfStmt;
}

void BasicParser::IfStmtContext::copyFrom(IfStmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MutiLineIfContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> BasicParser::MutiLineIfContext::If() {
  return getTokens(BasicParser::If);
}

tree::TerminalNode* BasicParser::MutiLineIfContext::If(size_t i) {
  return getToken(BasicParser::If, i);
}

tree::TerminalNode* BasicParser::MutiLineIfContext::End() {
  return getToken(BasicParser::End, 0);
}

std::vector<BasicParser::IfBlockContext *> BasicParser::MutiLineIfContext::ifBlock() {
  return getRuleContexts<BasicParser::IfBlockContext>();
}

BasicParser::IfBlockContext* BasicParser::MutiLineIfContext::ifBlock(size_t i) {
  return getRuleContext<BasicParser::IfBlockContext>(i);
}

std::vector<tree::TerminalNode *> BasicParser::MutiLineIfContext::ElseIf() {
  return getTokens(BasicParser::ElseIf);
}

tree::TerminalNode* BasicParser::MutiLineIfContext::ElseIf(size_t i) {
  return getToken(BasicParser::ElseIf, i);
}

tree::TerminalNode* BasicParser::MutiLineIfContext::Else() {
  return getToken(BasicParser::Else, 0);
}

std::vector<BasicParser::StatementContext *> BasicParser::MutiLineIfContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::MutiLineIfContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}

BasicParser::MutiLineIfContext::MutiLineIfContext(IfStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::MutiLineIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitMutiLineIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SingleLineIfContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::SingleLineIfContext::If() {
  return getToken(BasicParser::If, 0);
}

tree::TerminalNode* BasicParser::SingleLineIfContext::Then() {
  return getToken(BasicParser::Then, 0);
}

tree::TerminalNode* BasicParser::SingleLineIfContext::LineEnd() {
  return getToken(BasicParser::LineEnd, 0);
}

BasicParser::ExpContext* BasicParser::SingleLineIfContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

std::vector<BasicParser::StatementContext *> BasicParser::SingleLineIfContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::SingleLineIfContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}

tree::TerminalNode* BasicParser::SingleLineIfContext::Else() {
  return getToken(BasicParser::Else, 0);
}

BasicParser::SingleLineIfContext::SingleLineIfContext(IfStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::SingleLineIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitSingleLineIf(this);
  else
    return visitor->visitChildren(this);
}
BasicParser::IfStmtContext* BasicParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, BasicParser::RuleIfStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(319);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IfStmtContext *>(_tracker.createInstance<BasicParser::SingleLineIfContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(278);
      match(BasicParser::If);
      setState(279);
      dynamic_cast<SingleLineIfContext *>(_localctx)->condition = exp(0);
      setState(280);
      match(BasicParser::Then);
      setState(284);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(281);
          statement(); 
        }
        setState(286);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
      }
      setState(294);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BasicParser::Else) {
        setState(287);
        match(BasicParser::Else);
        setState(291);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(288);
            dynamic_cast<SingleLineIfContext *>(_localctx)->elsestatement = statement(); 
          }
          setState(293);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
        }
      }
      setState(296);
      match(BasicParser::LineEnd);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IfStmtContext *>(_tracker.createInstance<BasicParser::MutiLineIfContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(298);
      match(BasicParser::If);
      setState(299);
      dynamic_cast<MutiLineIfContext *>(_localctx)->firstBlock = ifBlock();
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BasicParser::ElseIf) {
        setState(300);
        match(BasicParser::ElseIf);
        setState(301);
        dynamic_cast<MutiLineIfContext *>(_localctx)->elseifBlock = ifBlock();
        setState(306);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(314);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BasicParser::Else) {
        setState(307);
        match(BasicParser::Else);
        setState(311);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 31) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
          | (1ULL << (BasicParser::If - 31))
          | (1ULL << (BasicParser::Dim - 31))
          | (1ULL << (BasicParser::Return - 31))
          | (1ULL << (BasicParser::Exit - 31))
          | (1ULL << (BasicParser::While - 31))
          | (1ULL << (BasicParser::Do - 31))
          | (1ULL << (BasicParser::For - 31))
          | (1ULL << (BasicParser::Call - 31))
          | (1ULL << (BasicParser::ID - 31)))) != 0)) {
          setState(308);
          dynamic_cast<MutiLineIfContext *>(_localctx)->elseBlock = statement();
          setState(313);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(316);
      match(BasicParser::End);
      setState(317);
      match(BasicParser::If);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBlockContext ------------------------------------------------------------------

BasicParser::IfBlockContext::IfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::IfBlockContext::Then() {
  return getToken(BasicParser::Then, 0);
}

BasicParser::ExpContext* BasicParser::IfBlockContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

std::vector<BasicParser::StatementContext *> BasicParser::IfBlockContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::IfBlockContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}


size_t BasicParser::IfBlockContext::getRuleIndex() const {
  return BasicParser::RuleIfBlock;
}


antlrcpp::Any BasicParser::IfBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitIfBlock(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::IfBlockContext* BasicParser::ifBlock() {
  IfBlockContext *_localctx = _tracker.createInstance<IfBlockContext>(_ctx, getState());
  enterRule(_localctx, 36, BasicParser::RuleIfBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    dynamic_cast<IfBlockContext *>(_localctx)->condition = exp(0);
    setState(322);
    match(BasicParser::Then);
    setState(326);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 31) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
      | (1ULL << (BasicParser::If - 31))
      | (1ULL << (BasicParser::Dim - 31))
      | (1ULL << (BasicParser::Return - 31))
      | (1ULL << (BasicParser::Exit - 31))
      | (1ULL << (BasicParser::While - 31))
      | (1ULL << (BasicParser::Do - 31))
      | (1ULL << (BasicParser::For - 31))
      | (1ULL << (BasicParser::Call - 31))
      | (1ULL << (BasicParser::ID - 31)))) != 0)) {
      setState(323);
      statement();
      setState(328);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopStmtContext ------------------------------------------------------------------

BasicParser::LoopStmtContext::LoopStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BasicParser::LoopStmtContext::getRuleIndex() const {
  return BasicParser::RuleLoopStmt;
}

void BasicParser::LoopStmtContext::copyFrom(LoopStmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DoUntilContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::DoUntilContext::Do() {
  return getToken(BasicParser::Do, 0);
}

tree::TerminalNode* BasicParser::DoUntilContext::Until() {
  return getToken(BasicParser::Until, 0);
}

BasicParser::ExpContext* BasicParser::DoUntilContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

tree::TerminalNode* BasicParser::DoUntilContext::Loop() {
  return getToken(BasicParser::Loop, 0);
}

std::vector<BasicParser::StatementContext *> BasicParser::DoUntilContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::DoUntilContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}

BasicParser::DoUntilContext::DoUntilContext(LoopStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::DoUntilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitDoUntil(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileWendContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::WhileWendContext::While() {
  return getToken(BasicParser::While, 0);
}

BasicParser::ExpContext* BasicParser::WhileWendContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

tree::TerminalNode* BasicParser::WhileWendContext::Wend() {
  return getToken(BasicParser::Wend, 0);
}

std::vector<BasicParser::StatementContext *> BasicParser::WhileWendContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::WhileWendContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}

BasicParser::WhileWendContext::WhileWendContext(LoopStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::WhileWendContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitWhileWend(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoWhileContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::DoWhileContext::Do() {
  return getToken(BasicParser::Do, 0);
}

tree::TerminalNode* BasicParser::DoWhileContext::While() {
  return getToken(BasicParser::While, 0);
}

BasicParser::ExpContext* BasicParser::DoWhileContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

tree::TerminalNode* BasicParser::DoWhileContext::Loop() {
  return getToken(BasicParser::Loop, 0);
}

std::vector<BasicParser::StatementContext *> BasicParser::DoWhileContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::DoWhileContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}

BasicParser::DoWhileContext::DoWhileContext(LoopStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::DoWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitDoWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopUntilContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::LoopUntilContext::Do() {
  return getToken(BasicParser::Do, 0);
}

tree::TerminalNode* BasicParser::LoopUntilContext::Loop() {
  return getToken(BasicParser::Loop, 0);
}

tree::TerminalNode* BasicParser::LoopUntilContext::Until() {
  return getToken(BasicParser::Until, 0);
}

BasicParser::ExpContext* BasicParser::LoopUntilContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

std::vector<BasicParser::StatementContext *> BasicParser::LoopUntilContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::LoopUntilContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}

BasicParser::LoopUntilContext::LoopUntilContext(LoopStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::LoopUntilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitLoopUntil(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopWhileContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::LoopWhileContext::Do() {
  return getToken(BasicParser::Do, 0);
}

tree::TerminalNode* BasicParser::LoopWhileContext::Loop() {
  return getToken(BasicParser::Loop, 0);
}

tree::TerminalNode* BasicParser::LoopWhileContext::While() {
  return getToken(BasicParser::While, 0);
}

BasicParser::ExpContext* BasicParser::LoopWhileContext::exp() {
  return getRuleContext<BasicParser::ExpContext>(0);
}

std::vector<BasicParser::StatementContext *> BasicParser::LoopWhileContext::statement() {
  return getRuleContexts<BasicParser::StatementContext>();
}

BasicParser::StatementContext* BasicParser::LoopWhileContext::statement(size_t i) {
  return getRuleContext<BasicParser::StatementContext>(i);
}

BasicParser::LoopWhileContext::LoopWhileContext(LoopStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any BasicParser::LoopWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitLoopWhile(this);
  else
    return visitor->visitChildren(this);
}
BasicParser::LoopStmtContext* BasicParser::loopStmt() {
  LoopStmtContext *_localctx = _tracker.createInstance<LoopStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, BasicParser::RuleLoopStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(381);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<LoopStmtContext *>(_tracker.createInstance<BasicParser::DoWhileContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(329);
      match(BasicParser::Do);
      setState(330);
      match(BasicParser::While);
      setState(331);
      exp(0);
      setState(335);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 31) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
        | (1ULL << (BasicParser::If - 31))
        | (1ULL << (BasicParser::Dim - 31))
        | (1ULL << (BasicParser::Return - 31))
        | (1ULL << (BasicParser::Exit - 31))
        | (1ULL << (BasicParser::While - 31))
        | (1ULL << (BasicParser::Do - 31))
        | (1ULL << (BasicParser::For - 31))
        | (1ULL << (BasicParser::Call - 31))
        | (1ULL << (BasicParser::ID - 31)))) != 0)) {
        setState(332);
        statement();
        setState(337);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(338);
      match(BasicParser::Loop);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<LoopStmtContext *>(_tracker.createInstance<BasicParser::DoUntilContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(340);
      match(BasicParser::Do);
      setState(341);
      match(BasicParser::Until);
      setState(342);
      exp(0);
      setState(346);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 31) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
        | (1ULL << (BasicParser::If - 31))
        | (1ULL << (BasicParser::Dim - 31))
        | (1ULL << (BasicParser::Return - 31))
        | (1ULL << (BasicParser::Exit - 31))
        | (1ULL << (BasicParser::While - 31))
        | (1ULL << (BasicParser::Do - 31))
        | (1ULL << (BasicParser::For - 31))
        | (1ULL << (BasicParser::Call - 31))
        | (1ULL << (BasicParser::ID - 31)))) != 0)) {
        setState(343);
        statement();
        setState(348);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(349);
      match(BasicParser::Loop);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<LoopStmtContext *>(_tracker.createInstance<BasicParser::LoopUntilContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(351);
      match(BasicParser::Do);
      setState(355);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 31) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
        | (1ULL << (BasicParser::If - 31))
        | (1ULL << (BasicParser::Dim - 31))
        | (1ULL << (BasicParser::Return - 31))
        | (1ULL << (BasicParser::Exit - 31))
        | (1ULL << (BasicParser::While - 31))
        | (1ULL << (BasicParser::Do - 31))
        | (1ULL << (BasicParser::For - 31))
        | (1ULL << (BasicParser::Call - 31))
        | (1ULL << (BasicParser::ID - 31)))) != 0)) {
        setState(352);
        statement();
        setState(357);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(358);
      match(BasicParser::Loop);
      setState(359);
      match(BasicParser::Until);
      setState(360);
      exp(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<LoopStmtContext *>(_tracker.createInstance<BasicParser::LoopWhileContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(361);
      match(BasicParser::Do);
      setState(365);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 31) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
        | (1ULL << (BasicParser::If - 31))
        | (1ULL << (BasicParser::Dim - 31))
        | (1ULL << (BasicParser::Return - 31))
        | (1ULL << (BasicParser::Exit - 31))
        | (1ULL << (BasicParser::While - 31))
        | (1ULL << (BasicParser::Do - 31))
        | (1ULL << (BasicParser::For - 31))
        | (1ULL << (BasicParser::Call - 31))
        | (1ULL << (BasicParser::ID - 31)))) != 0)) {
        setState(362);
        statement();
        setState(367);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(368);
      match(BasicParser::Loop);
      setState(369);
      match(BasicParser::While);
      setState(370);
      exp(0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<LoopStmtContext *>(_tracker.createInstance<BasicParser::WhileWendContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(371);
      match(BasicParser::While);
      setState(372);
      exp(0);
      setState(376);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 31) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 31)) & ((1ULL << (BasicParser::LineEnd - 31))
        | (1ULL << (BasicParser::If - 31))
        | (1ULL << (BasicParser::Dim - 31))
        | (1ULL << (BasicParser::Return - 31))
        | (1ULL << (BasicParser::Exit - 31))
        | (1ULL << (BasicParser::While - 31))
        | (1ULL << (BasicParser::Do - 31))
        | (1ULL << (BasicParser::For - 31))
        | (1ULL << (BasicParser::Call - 31))
        | (1ULL << (BasicParser::ID - 31)))) != 0)) {
        setState(373);
        statement();
        setState(378);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(379);
      match(BasicParser::Wend);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BasicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return expSempred(dynamic_cast<ExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BasicParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);
    case 4: return precpred(_ctx, 9);
    case 5: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> BasicParser::_decisionToDFA;
atn::PredictionContextCache BasicParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN BasicParser::_atn;
std::vector<uint16_t> BasicParser::_serializedATN;

std::vector<std::string> BasicParser::_ruleNames = {
  "moduleBody", "declare", "typeDecl", "varDecl", "variable", "functionDecl", 
  "subDecl", "varType", "statement", "callStmt", "passArg", "assignStmt", 
  "exitStmt", "returnStmt", "exp", "forStmt", "foreachStmt", "ifStmt", "ifBlock", 
  "loopStmt"
};

std::vector<std::string> BasicParser::_literalNames = {
  "", "','", "'='", "'('", "')'", "'=:'", "'-'", "'&'", "'|'", "'^'", "'mod'", 
  "'*'", "'/'", "'\\'", "'+'", "'>'", "'<'", "'<='", "'=<'", "'<>'", "'>='", 
  "'=>'", "'not'", "'and'", "'or'", "'xor'"
};

std::vector<std::string> BasicParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "Number", "String", "Boolean", "Comment", 
  "BlockComment", "LineEnd", "WS", "If", "ElseIf", "Wend", "From", "Import", 
  "Namespace", "Implement", "Type", "Alias", "Self", "Static", "Module", 
  "Public", "Private", "Protected", "Get", "Set", "Property", "Var", "Dim", 
  "Let", "Return", "Function", "Difference", "Union", "Case", "Select", 
  "End", "Until", "Loop", "Exit", "While", "Do", "Each", "To", "Step", "Next", 
  "In", "For", "Optional", "Byval", "Byref", "Then", "Else", "Call", "Sub", 
  "As", "ID"
};

dfa::Vocabulary BasicParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> BasicParser::_tokenNames;

BasicParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x52, 0x182, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x2d, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x30, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x36, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3b, 0xa, 0x4, 
    0x3, 0x4, 0x7, 0x4, 0x3e, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x41, 0xb, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x7, 0x5, 0x4a, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x4d, 0xb, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x54, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x5c, 
    0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x5f, 0xb, 0x7, 0x5, 0x7, 0x61, 0xa, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x67, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x6a, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x75, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x78, 0xb, 0x8, 0x5, 0x8, 0x7a, 0xa, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0x7d, 0xa, 0x8, 0x3, 0x8, 0x7, 0x8, 0x80, 0xa, 0x8, 0xc, 
    0x8, 0xe, 0x8, 0x83, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x93, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x9b, 0xa, 0xb, 
    0xc, 0xb, 0xe, 0xb, 0x9e, 0xb, 0xb, 0x5, 0xb, 0xa0, 0xa, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xa7, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0xaa, 0xb, 0xb, 0x5, 0xb, 0xac, 0xa, 0xb, 0x5, 0xb, 0xae, 
    0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0xb5, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0xc3, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 
    0xcf, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xd2, 0xb, 0x10, 0x5, 0x10, 0xd4, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xdf, 0xa, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xf3, 0xa, 
    0x10, 0xc, 0x10, 0xe, 0x10, 0xf6, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0x101, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x104, 0xb, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x108, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x110, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x113, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x117, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 
    0x11d, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x120, 0xb, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x7, 0x13, 0x124, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x127, 
    0xb, 0x13, 0x5, 0x13, 0x129, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x131, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x134, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x138, 
    0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x13b, 0xb, 0x13, 0x5, 0x13, 0x13d, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x142, 0xa, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x147, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x14a, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x7, 0x15, 0x150, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x153, 0xb, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 
    0x15, 0x15b, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x15e, 0xb, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x164, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0x167, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x16e, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
    0x171, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x179, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x17c, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x180, 0xa, 0x15, 0x3, 0x15, 
    0x2, 0x3, 0x1e, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 
    0xa, 0x4, 0x2, 0x4, 0x4, 0x7, 0x7, 0x6, 0x2, 0x39, 0x39, 0x43, 0x43, 
    0x49, 0x49, 0x50, 0x50, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0xb, 0xc, 0x3, 
    0x2, 0xd, 0xf, 0x4, 0x2, 0x8, 0x8, 0x10, 0x10, 0x4, 0x2, 0x4, 0x4, 0x11, 
    0x17, 0x3, 0x2, 0x19, 0x1b, 0x2, 0x1b1, 0x2, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x35, 0x3, 0x2, 0x2, 0x2, 0x6, 0x37, 0x3, 0x2, 0x2, 0x2, 0x8, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x4e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x10, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x92, 0x3, 0x2, 0x2, 0x2, 0x14, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x22, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x141, 0x3, 0x2, 0x2, 0x2, 0x26, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x5, 0x4, 0x3, 
    0x2, 0x2b, 0x2d, 0x7, 0x21, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x31, 0x36, 0x5, 
    0xc, 0x7, 0x2, 0x32, 0x36, 0x5, 0xe, 0x8, 0x2, 0x33, 0x36, 0x5, 0x8, 
    0x5, 0x2, 0x34, 0x36, 0x5, 0x6, 0x4, 0x2, 0x35, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x5, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x38, 0x7, 0x2a, 0x2, 0x2, 0x38, 0x3f, 0x7, 0x52, 0x2, 0x2, 0x39, 0x3b, 
    0x5, 0xa, 0x6, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3e, 0x7, 0x21, 
    0x2, 0x2, 0x3d, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x42, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x43, 0x7, 0x3e, 0x2, 0x2, 0x43, 0x44, 0x7, 0x2a, 0x2, 0x2, 0x44, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x36, 0x2, 0x2, 0x46, 0x4b, 0x5, 
    0xa, 0x6, 0x2, 0x47, 0x48, 0x7, 0x3, 0x2, 0x2, 0x48, 0x4a, 0x5, 0xa, 
    0x6, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4f, 0x7, 0x52, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x51, 0x2, 0x2, 0x50, 0x53, 
    0x5, 0x10, 0x9, 0x2, 0x51, 0x52, 0x7, 0x4, 0x2, 0x2, 0x52, 0x54, 0x5, 
    0x1e, 0x10, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0xb, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x39, 0x2, 
    0x2, 0x56, 0x57, 0x7, 0x52, 0x2, 0x2, 0x57, 0x60, 0x7, 0x5, 0x2, 0x2, 
    0x58, 0x5d, 0x5, 0xa, 0x6, 0x2, 0x59, 0x5a, 0x7, 0x3, 0x2, 0x2, 0x5a, 
    0x5c, 0x5, 0xa, 0x6, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x58, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x6, 0x2, 0x2, 
    0x63, 0x64, 0x7, 0x51, 0x2, 0x2, 0x64, 0x68, 0x7, 0x52, 0x2, 0x2, 0x65, 
    0x67, 0x5, 0x12, 0xa, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x69, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x6b, 0x6c, 0x7, 0x3e, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x39, 0x2, 
    0x2, 0x6d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x50, 0x2, 0x2, 
    0x6f, 0x7c, 0x7, 0x52, 0x2, 0x2, 0x70, 0x79, 0x7, 0x5, 0x2, 0x2, 0x71, 
    0x76, 0x5, 0xa, 0x6, 0x2, 0x72, 0x73, 0x7, 0x3, 0x2, 0x2, 0x73, 0x75, 
    0x5, 0xa, 0x6, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x79, 0x71, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x7, 0x6, 0x2, 0x2, 0x7c, 
    0x70, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x80, 0x5, 0x12, 0xa, 0x2, 0x7f, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x84, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0x3e, 0x2, 0x2, 
    0x85, 0x86, 0x7, 0x50, 0x2, 0x2, 0x86, 0xf, 0x3, 0x2, 0x2, 0x2, 0x87, 
    0x88, 0x7, 0x52, 0x2, 0x2, 0x88, 0x11, 0x3, 0x2, 0x2, 0x2, 0x89, 0x93, 
    0x5, 0x20, 0x11, 0x2, 0x8a, 0x93, 0x5, 0x28, 0x15, 0x2, 0x8b, 0x93, 
    0x5, 0x24, 0x13, 0x2, 0x8c, 0x93, 0x7, 0x21, 0x2, 0x2, 0x8d, 0x93, 0x5, 
    0x1a, 0xe, 0x2, 0x8e, 0x93, 0x5, 0x1c, 0xf, 0x2, 0x8f, 0x93, 0x5, 0x18, 
    0xd, 0x2, 0x90, 0x93, 0x5, 0x14, 0xb, 0x2, 0x91, 0x93, 0x5, 0x8, 0x5, 
    0x2, 0x92, 0x89, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x8d, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x91, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x13, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x4f, 
    0x2, 0x2, 0x95, 0x96, 0x7, 0x52, 0x2, 0x2, 0x96, 0x9f, 0x7, 0x5, 0x2, 
    0x2, 0x97, 0x9c, 0x5, 0x16, 0xc, 0x2, 0x98, 0x99, 0x7, 0x3, 0x2, 0x2, 
    0x99, 0x9b, 0x5, 0x16, 0xc, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xae, 0x7, 0x6, 0x2, 
    0x2, 0xa2, 0xab, 0x7, 0x52, 0x2, 0x2, 0xa3, 0xa8, 0x5, 0x16, 0xc, 0x2, 
    0xa4, 0xa5, 0x7, 0x3, 0x2, 0x2, 0xa5, 0xa7, 0x5, 0x16, 0xc, 0x2, 0xa6, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xad, 0x94, 0x3, 0x2, 0x2, 0x2, 0xad, 0xa2, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0x15, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb5, 0x5, 0x1e, 0x10, 0x2, 0xb0, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x52, 0x2, 0x2, 0xb2, 0xb3, 
    0x9, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x5, 0x1e, 0x10, 0x2, 0xb4, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x52, 0x2, 
    0x2, 0xb7, 0xb8, 0x7, 0x4, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x1e, 0x10, 0x2, 
    0xb9, 0x19, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x41, 0x2, 0x2, 0xbb, 
    0xbc, 0x9, 0x3, 0x2, 0x2, 0xbc, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 
    0x7, 0x38, 0x2, 0x2, 0xbe, 0xc3, 0x5, 0x1e, 0x10, 0x2, 0xbf, 0xc0, 0x7, 
    0x52, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x4, 0x2, 0x2, 0xc1, 0xc3, 0x5, 0x1e, 
    0x10, 0x2, 0xc2, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x8, 0x10, 0x1, 0x2, 
    0xc5, 0xc6, 0x7, 0x8, 0x2, 0x2, 0xc6, 0xdf, 0x5, 0x1e, 0x10, 0x10, 0xc7, 
    0xc8, 0x7, 0x18, 0x2, 0x2, 0xc8, 0xdf, 0x5, 0x1e, 0x10, 0xa, 0xc9, 0xca, 
    0x7, 0x52, 0x2, 0x2, 0xca, 0xd3, 0x7, 0x5, 0x2, 0x2, 0xcb, 0xd0, 0x5, 
    0x16, 0xc, 0x2, 0xcc, 0xcd, 0x7, 0x3, 0x2, 0x2, 0xcd, 0xcf, 0x5, 0x16, 
    0xc, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0xd5, 0xdf, 0x7, 0x6, 0x2, 0x2, 0xd6, 0xd7, 0x7, 
    0x5, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x1e, 0x10, 0x2, 0xd8, 0xd9, 0x7, 0x6, 
    0x2, 0x2, 0xd9, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdf, 0x7, 0x1c, 0x2, 
    0x2, 0xdb, 0xdf, 0x7, 0x1d, 0x2, 0x2, 0xdc, 0xdf, 0x7, 0x52, 0x2, 0x2, 
    0xdd, 0xdf, 0x7, 0x1e, 0x2, 0x2, 0xde, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xde, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd6, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xda, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0xc, 0xf, 0x2, 
    0x2, 0xe1, 0xe2, 0x9, 0x4, 0x2, 0x2, 0xe2, 0xf3, 0x5, 0x1e, 0x10, 0x10, 
    0xe3, 0xe4, 0xc, 0xe, 0x2, 0x2, 0xe4, 0xe5, 0x9, 0x5, 0x2, 0x2, 0xe5, 
    0xf3, 0x5, 0x1e, 0x10, 0xf, 0xe6, 0xe7, 0xc, 0xd, 0x2, 0x2, 0xe7, 0xe8, 
    0x9, 0x6, 0x2, 0x2, 0xe8, 0xf3, 0x5, 0x1e, 0x10, 0xe, 0xe9, 0xea, 0xc, 
    0xc, 0x2, 0x2, 0xea, 0xeb, 0x9, 0x7, 0x2, 0x2, 0xeb, 0xf3, 0x5, 0x1e, 
    0x10, 0xd, 0xec, 0xed, 0xc, 0xb, 0x2, 0x2, 0xed, 0xee, 0x9, 0x8, 0x2, 
    0x2, 0xee, 0xf3, 0x5, 0x1e, 0x10, 0xc, 0xef, 0xf0, 0xc, 0x9, 0x2, 0x2, 
    0xf0, 0xf1, 0x9, 0x9, 0x2, 0x2, 0xf1, 0xf3, 0x5, 0x1e, 0x10, 0xa, 0xf2, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xf2, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xf2, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf6, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 
    0x2, 0xf5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 
    0xf7, 0xf8, 0x7, 0x49, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x1e, 0x10, 0x2, 0xf9, 
    0xfa, 0x7, 0x4, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x1e, 0x10, 0x2, 0xfb, 0xfc, 
    0x7, 0x45, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x1e, 0x10, 0x2, 0xfd, 0xfe, 0x7, 
    0x46, 0x2, 0x2, 0xfe, 0x102, 0x5, 0x1e, 0x10, 0x2, 0xff, 0x101, 0x5, 
    0x12, 0xa, 0x2, 0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x103, 0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 
    0x2, 0x2, 0x2, 0x105, 0x107, 0x7, 0x47, 0x2, 0x2, 0x106, 0x108, 0x5, 
    0x1e, 0x10, 0x2, 0x107, 0x106, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x21, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x49, 
    0x2, 0x2, 0x10a, 0x10b, 0x7, 0x44, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x1e, 
    0x10, 0x2, 0x10c, 0x10d, 0x7, 0x48, 0x2, 0x2, 0x10d, 0x111, 0x5, 0x1e, 
    0x10, 0x2, 0x10e, 0x110, 0x5, 0x12, 0xa, 0x2, 0x10f, 0x10e, 0x3, 0x2, 
    0x2, 0x2, 0x110, 0x113, 0x3, 0x2, 0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 0x114, 0x3, 0x2, 
    0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x114, 0x116, 0x7, 0x47, 
    0x2, 0x2, 0x115, 0x117, 0x5, 0x1e, 0x10, 0x2, 0x116, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x118, 0x119, 0x7, 0x23, 0x2, 0x2, 0x119, 0x11a, 0x5, 0x1e, 0x10, 
    0x2, 0x11a, 0x11e, 0x7, 0x4d, 0x2, 0x2, 0x11b, 0x11d, 0x5, 0x12, 0xa, 
    0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x120, 0x3, 0x2, 0x2, 
    0x2, 0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 0x2, 
    0x2, 0x11f, 0x128, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 
    0x2, 0x121, 0x125, 0x7, 0x4e, 0x2, 0x2, 0x122, 0x124, 0x5, 0x12, 0xa, 
    0x2, 0x123, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 0x127, 0x3, 0x2, 0x2, 
    0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 
    0x2, 0x126, 0x129, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 
    0x2, 0x128, 0x121, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x21, 0x2, 
    0x2, 0x12b, 0x142, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x23, 0x2, 
    0x2, 0x12d, 0x132, 0x5, 0x26, 0x14, 0x2, 0x12e, 0x12f, 0x7, 0x24, 0x2, 
    0x2, 0x12f, 0x131, 0x5, 0x26, 0x14, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x134, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x13c, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x135, 0x139, 0x7, 0x4e, 0x2, 
    0x2, 0x136, 0x138, 0x5, 0x12, 0xa, 0x2, 0x137, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x138, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x13f, 0x7, 0x3e, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x23, 0x2, 
    0x2, 0x140, 0x142, 0x3, 0x2, 0x2, 0x2, 0x141, 0x118, 0x3, 0x2, 0x2, 
    0x2, 0x141, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x142, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x144, 0x5, 0x1e, 0x10, 0x2, 0x144, 0x148, 0x7, 0x4d, 0x2, 0x2, 
    0x145, 0x147, 0x5, 0x12, 0xa, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x27, 0x3, 0x2, 0x2, 0x2, 0x14a, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0x43, 0x2, 0x2, 0x14c, 
    0x14d, 0x7, 0x42, 0x2, 0x2, 0x14d, 0x151, 0x5, 0x1e, 0x10, 0x2, 0x14e, 
    0x150, 0x5, 0x12, 0xa, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 
    0x153, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x154, 0x3, 0x2, 0x2, 0x2, 0x153, 
    0x151, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x7, 0x40, 0x2, 0x2, 0x155, 
    0x180, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x7, 0x43, 0x2, 0x2, 0x157, 
    0x158, 0x7, 0x3f, 0x2, 0x2, 0x158, 0x15c, 0x5, 0x1e, 0x10, 0x2, 0x159, 
    0x15b, 0x5, 0x12, 0xa, 0x2, 0x15a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 
    0x15e, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 
    0x15d, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15e, 
    0x15c, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x40, 0x2, 0x2, 0x160, 
    0x180, 0x3, 0x2, 0x2, 0x2, 0x161, 0x165, 0x7, 0x43, 0x2, 0x2, 0x162, 
    0x164, 0x5, 0x12, 0xa, 0x2, 0x163, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 
    0x167, 0x3, 0x2, 0x2, 0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 
    0x166, 0x3, 0x2, 0x2, 0x2, 0x166, 0x168, 0x3, 0x2, 0x2, 0x2, 0x167, 
    0x165, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x7, 0x40, 0x2, 0x2, 0x169, 
    0x16a, 0x7, 0x3f, 0x2, 0x2, 0x16a, 0x180, 0x5, 0x1e, 0x10, 0x2, 0x16b, 
    0x16f, 0x7, 0x43, 0x2, 0x2, 0x16c, 0x16e, 0x5, 0x12, 0xa, 0x2, 0x16d, 
    0x16c, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x171, 0x3, 0x2, 0x2, 0x2, 0x16f, 
    0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 
    0x172, 0x3, 0x2, 0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 
    0x173, 0x7, 0x40, 0x2, 0x2, 0x173, 0x174, 0x7, 0x42, 0x2, 0x2, 0x174, 
    0x180, 0x5, 0x1e, 0x10, 0x2, 0x175, 0x176, 0x7, 0x42, 0x2, 0x2, 0x176, 
    0x17a, 0x5, 0x1e, 0x10, 0x2, 0x177, 0x179, 0x5, 0x12, 0xa, 0x2, 0x178, 
    0x177, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17a, 
    0x178, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17b, 
    0x17d, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17d, 
    0x17e, 0x7, 0x25, 0x2, 0x2, 0x17e, 0x180, 0x3, 0x2, 0x2, 0x2, 0x17f, 
    0x14b, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x156, 0x3, 0x2, 0x2, 0x2, 0x17f, 
    0x161, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x17f, 
    0x175, 0x3, 0x2, 0x2, 0x2, 0x180, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2c, 
    0x2e, 0x35, 0x3a, 0x3f, 0x4b, 0x53, 0x5d, 0x60, 0x68, 0x76, 0x79, 0x7c, 
    0x81, 0x92, 0x9c, 0x9f, 0xa8, 0xab, 0xad, 0xb4, 0xc2, 0xd0, 0xd3, 0xde, 
    0xf2, 0xf4, 0x102, 0x107, 0x111, 0x116, 0x11e, 0x125, 0x128, 0x132, 
    0x139, 0x13c, 0x141, 0x148, 0x151, 0x15c, 0x165, 0x16f, 0x17a, 0x17f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

BasicParser::Initializer BasicParser::_init;
