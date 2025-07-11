#ifndef KEYWORD_TOKENS_HH
#define KEYWORD_TOKENS_HH

#include <string>
#include <vector>

// Keyword Token Defintion
typedef std::string KeywordToken;

// Keyword Tokens
const KeywordToken ABSTRACT_TOKEN;
const KeywordToken ANY_TOKEN;
const KeywordToken AS_TOKEN;
const KeywordToken ASYNC_TOKEN;
const KeywordToken AWAIT_TOKEN;
const KeywordToken BOX_TOKEN;
const KeywordToken BREAK_TOKEN;
const KeywordToken CASE_TOKEN;
const KeywordToken CATCH_TOKEN;
const KeywordToken CONST_TOKEN;
const KeywordToken CONTINUE_TOKEN;
const KeywordToken DEFER_TOKEN;
const KeywordToken DEINIT_TOKEN;
const KeywordToken DO_TOKEN;
const KeywordToken DYN_TOKEN;
const KeywordToken DYNAMIC_TOKEN;
const KeywordToken ELSE_TOKEN;
const KeywordToken ENUM_TOKEN;
const KeywordToken EXPORT_TOKEN;
const KeywordToken EXTERN_TOKEN;
const KeywordToken FALSE_TOKEN;
const KeywordToken FINAL_TOKEN;
const KeywordToken FN_TOKEN;
const KeywordToken FUNC_TOKEN;
const KeywordToken FUNCTION_TOKEN;
const KeywordToken FOR_TOKEN;
const KeywordToken IF_TOKEN;
const KeywordToken IMPL_TOKEN;
const KeywordToken IMPORT_TOKEN;
const KeywordToken INIT_TOKEN;
const KeywordToken INTERFACE_TOKEN;
const KeywordToken IN_TOKEN;
const KeywordToken LET_TOKEN;
const KeywordToken MACRO_TOKEN;
const KeywordToken MATCH_TOKEN;
const KeywordToken MOD_TOKEN;
const KeywordToken MODULE_TOKEN;
const KeywordToken MOVE_TOKEN;
const KeywordToken MUT_TOKEN;
const KeywordToken MUTABLE_TOKEN;
const KeywordToken NIL_TOKEN;
const KeywordToken NULL_TOKEN;
const KeywordToken OVERRIDE_TOKEN;
const KeywordToken PACKAGE_TOKEN;
const KeywordToken PRIV_TOKEN;
const KeywordToken PRIVATE_TOKEN;
const KeywordToken PUB_TOKEN;
const KeywordToken PUBLIC_TOKEN;
const KeywordToken RAW_TOKEN;
const KeywordToken REF_TOKEN;
const KeywordToken RETURN_TOKEN;
const KeywordToken SELF_TOKEN;
const KeywordToken STATIC_TOKEN;
const KeywordToken STRUCT_TOKEN;
const KeywordToken SUPER_TOKEN;
const KeywordToken SWITCH_TOKEN;
const KeywordToken THROW_TOKEN;
const KeywordToken TRAIT_TOKEN;
const KeywordToken TRUE_TOKEN;
const KeywordToken TRY_TOKEN;
const KeywordToken TYPE_TOKEN ;
const KeywordToken TYPEDEF_TOKEN;
const KeywordToken TYPEOF_TOKEN;
const KeywordToken UNION_TOKEN;
const KeywordToken UNSAFE_TOKEN;
const KeywordToken USE_TOKEN;
const KeywordToken UNSIZED_TOKEN;
const KeywordToken VAR_TOKEN;
const KeywordToken VARIABLE_TOKEN;
const KeywordToken WHERE_TOKEN;
const KeywordToken WHILE_TOKEN;

// Keyword Token Vector
std::vector<KeywordToken> keywords_vector();

#endif
