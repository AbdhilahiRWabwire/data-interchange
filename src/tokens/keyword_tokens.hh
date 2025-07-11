#ifndef KEYWORD_TOKENS_HH
#define KEYWORD_TOKENS_HH

#include <string>
#include <vector>

namespace tokens {
    using namespace std;
    
    // Keyword Token Defintion
    typedef string KeywordToken;
    
    // Keyword Tokens
    const KeywordToken ABSTRACT_TOKEN = "abstract";
    const KeywordToken ANY_TOKEN = "any";
    const KeywordToken AS_TOKEN = "as";
    const KeywordToken ASYNC_TOKEN = "async";
    const KeywordToken AWAIT_TOKEN = "await";
    const KeywordToken BOX_TOKEN = "box";
    const KeywordToken BREAK_TOKEN = "break";
    const KeywordToken CASE_TOKEN = "case";
    const KeywordToken CATCH_TOKEN = "catch";
    const KeywordToken CONST_TOKEN = "const";
    const KeywordToken CONTINUE_TOKEN = "continue";
    const KeywordToken DEFER_TOKEN = "defer";
    const KeywordToken DEINIT_TOKEN = "deinit";
    const KeywordToken DO_TOKEN = "do";
    const KeywordToken DYN_TOKEN = "dyn";
    const KeywordToken DYNAMIC_TOKEN = "dynamic";
    const KeywordToken ELSE_TOKEN = "else";
    const KeywordToken ENUM_TOKEN = "enum";
    const KeywordToken EXPORT_TOKEN = "export";
    const KeywordToken EXTERN_TOKEN = "extern";
    const KeywordToken FALSE_TOKEN = "false";
    const KeywordToken FINAL_TOKEN = "final";
    const KeywordToken FN_TOKEN = "fn";
    const KeywordToken FUNC_TOKEN = "func";
    const KeywordToken FUNCTION_TOKEN = "function";
    const KeywordToken FOR_TOKEN = "for";
    const KeywordToken IF_TOKEN = "if";
    const KeywordToken IMPL_TOKEN = "impl";
    const KeywordToken IMPORT_TOKEN = "import";
    const KeywordToken INIT_TOKEN = "init";
    const KeywordToken INTERFACE_TOKEN = "interface";
    const KeywordToken IN_TOKEN = "in";
    const KeywordToken LET_TOKEN = "let";
    const KeywordToken MACRO_TOKEN = "macro";
    const KeywordToken MATCH_TOKEN = "match";
    const KeywordToken MOD_TOKEN = "mod";
    const KeywordToken MODULE_TOKEN = "module";
    const KeywordToken MOVE_TOKEN = "move";
    const KeywordToken MUT_TOKEN = "mut";
    const KeywordToken MUTABLE_TOKEN = "mutable";
    const KeywordToken NIL_TOKEN = "nil";
    const KeywordToken NULL_TOKEN = "null";
    const KeywordToken OVERRIDE_TOKEN = "override";
    const KeywordToken PACKAGE_TOKEN = "package";
    const KeywordToken PRIV_TOKEN = "priv";
    const KeywordToken PRIVATE_TOKEN = "private";
    const KeywordToken PUB_TOKEN = "pub";
    const KeywordToken PUBLIC_TOKEN = "public";
    const KeywordToken RAW_TOKEN = "raw";
    const KeywordToken REF_TOKEN = "ref";
    const KeywordToken RETURN_TOKEN = "return";
    const KeywordToken SELF_TOKEN = "self";
    const KeywordToken STATIC_TOKEN = "static";
    const KeywordToken STRUCT_TOKEN = "struct";
    const KeywordToken SUPER_TOKEN = "super";
    const KeywordToken SWITCH_TOKEN = "switch";
    const KeywordToken THROW_TOKEN = "throw";
    const KeywordToken TRAIT_TOKEN = "trait";
    const KeywordToken TRUE_TOKEN = "true";
    const KeywordToken TRY_TOKEN = "try";
    const KeywordToken TYPE_TOKEN = "type";
    const KeywordToken TYPEDEF_TOKEN = "typedef";
    const KeywordToken TYPEOF_TOKEN = "typeof";
    const KeywordToken UNION_TOKEN = "union";
    const KeywordToken UNSAFE_TOKEN = "unsafe";
    const KeywordToken USE_TOKEN = "use";
    const KeywordToken UNSIZED_TOKEN = "unsized";
    const KeywordToken VAR_TOKEN = "var";
    const KeywordToken VARIABLE_TOKEN = "variable";
    const KeywordToken WHERE_TOKEN = "where";
    const KeywordToken WHILE_TOKEN = "while";
    
    // Keyword Token Vector
    vector<KeywordToken> keywords_vector();
}

#endif
