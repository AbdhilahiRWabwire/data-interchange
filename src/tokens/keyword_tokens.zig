const standard: type = @import("std");

// Keyword Token Defintion
pub const KeywordToken: type = []const u8;

// Keyword Tokens
pub const ABSTRACT_TOKEN: [8]KeywordToken = "abstract";
pub const ANY_TOKEN: [3]KeywordToken = "any";
pub const AS_TOKEN: [2]KeywordToken = "as";
pub const ASYNC_TOKEN: [5]KeywordToken = "async";
pub const AWAIT_TOKEN: [5]KeywordToken = "await";
pub const BOX_TOKEN: [3]KeywordToken = "box";
pub const BREAK_TOKEN: [5]KeywordToken = "break";
pub const CASE_TOKEN: [4]KeywordToken = "case";
pub const CATCH_TOKEN: [5]KeywordToken = "catch";
pub const CONST_TOKEN: [5]KeywordToken = "const";
pub const CONTINUE_TOKEN: [8]KeywordToken = "continue";
pub const DEFER_TOKEN: [5]KeywordToken = "defer";
pub const DEINIT_TOKEN: [6]KeywordToken = "deinit";
pub const DO_TOKEN: [2]KeywordToken = "do";
pub const DYN_TOKEN: [3]KeywordToken = "dyn";
pub const DYNAMIC_TOKEN: [7]KeywordToken = "dynamic";
pub const ELSE_TOKEN: [4]KeywordToken = "else";
pub const ENUM_TOKEN: [4]KeywordToken = "enum";
pub const EXPORT_TOKEN: [6]KeywordToken = "export";
pub const EXTERN_TOKEN: [6]KeywordToken = "extern";
pub const FALSE_TOKEN: [5]KeywordToken = "false";
pub const FINAL_TOKEN: [5]KeywordToken = "final";
pub const FN_TOKEN: [2]KeywordToken = "fn";
pub const FUNC_TOKEN: [4]KeywordToken = "func";
pub const FUNCTION_TOKEN: [8]KeywordToken = "function";
pub const FOR_TOKEN: [3]KeywordToken = "for";
pub const IF_TOKEN: [2]KeywordToken = "if";
pub const IMPL_TOKEN: [4]KeywordToken = "impl";
pub const IMPORT_TOKEN: [6]KeywordToken = "import";
pub const INIT_TOKEN: [4]KeywordToken = "init";
pub const INTERFACE_TOKEN: [9]KeywordToken = "interface";
pub const IN_TOKEN: [2]KeywordToken = "in";
pub const LET_TOKEN: [3]KeywordToken = "let";
pub const MACRO_TOKEN: [5]KeywordToken = "macro";
pub const MATCH_TOKEN: [5]KeywordToken = "match";
pub const MOD_TOKEN: [3]KeywordToken = "mod";
pub const MODULE_TOKEN: [7]KeywordToken = "module";
pub const MOVE_TOKEN: [4]KeywordToken = "move";
pub const MUT_TOKEN: [3]KeywordToken = "mut";
pub const MUTABLE_TOKEN: [7]KeywordToken = "mutable";
pub const NIL_TOKEN: [3]KeywordToken = "nil";
pub const NULL_TOKEN: [3]KeywordToken = "null";
pub const OVERRIDE_TOKEN: [8]KeywordToken = "override";
pub const PACKAGE_TOKEN: [7]KeywordToken = "package";
pub const PRIV_TOKEN: [4]KeywordToken = "priv";
pub const PRIVATE_TOKEN: [7]KeywordToken = "private";
pub const PUB_TOKEN: [3]KeywordToken = "pub";
pub const PUBLIC_TOKEN: [6]KeywordToken = "public";
pub const RAW_TOKEN: [3]KeywordToken = "raw";
pub const REF_TOKEN: [3]KeywordToken = "ref";
pub const RETURN_TOKEN: [6]KeywordToken = "return";
pub const SELF_TOKEN: [4]KeywordToken = "self";
pub const STATIC_TOKEN: [6]KeywordToken = "static";
pub const STRUCT_TOKEN: [6]KeywordToken = "struct";
pub const SUPER_TOKEN: [5]KeywordToken = "super";
pub const SWITCH_TOKEN: [6]KeywordToken = "switch";
pub const THROW_TOKEN: [5]KeywordToken = "throw";
pub const TRAIT_TOKEN: [5]KeywordToken = "trait";
pub const TRUE_TOKEN: [4]KeywordToken = "true";
pub const TRY_TOKEN: [3]KeywordToken = "try";
pub const TYPE_TOKEN: [4]KeywordToken = "type";
pub const TYPEDEF_TOKEN: [7]KeywordToken = "typedef";
pub const TYPEOF_TOKEN: [6]KeywordToken = "typeof";
pub const UNION_TOKEN: [5]KeywordToken = "union";
pub const UNSAFE_TOKEN: [6]KeywordToken = "unsafe";
pub const USE_TOKEN: [3]KeywordToken = "use";
pub const UNSIZED_TOKEN: [7]KeywordToken = "unsized";
pub const VAR_TOKEN: [3]KeywordToken = "var";
pub const VARIABLE_TOKEN: [8]KeywordToken = "variable";
pub const WHERE_TOKEN: [5]KeywordToken = "where";
pub const WHILE_TOKEN: [5]KeywordToken = "while";

// Keyword Token Vector
pub fn keywords_vector() @Vector(78, KeywordToken) {
    const keywords: @Vector(78, KeywordToken) = @Vector(78, KeywordToken){
        ABSTRACT_TOKEN,
        ANY_TOKEN,
        AS_TOKEN,
        ASYNC_TOKEN,
        AWAIT_TOKEN,
        BOX_TOKEN,
        BREAK_TOKEN,
        CASE_TOKEN,
        CATCH_TOKEN,
        CONST_TOKEN,
        CONTINUE_TOKEN,
        DEFER_TOKEN,
        DEINIT_TOKEN,
        DO_TOKEN,
        DYN_TOKEN,
        DYNAMIC_TOKEN,
        ELSE_TOKEN,
        ENUM_TOKEN,
        EXPORT_TOKEN,
        EXTERN_TOKEN,
        FALSE_TOKEN,
        FINAL_TOKEN,
        FN_TOKEN,
        FUNC_TOKEN,
        FUNCTION_TOKEN,
        FOR_TOKEN,
        IF_TOKEN,
        IMPL_TOKEN,
        IMPORT_TOKEN,
        INIT_TOKEN,
        INTERFACE_TOKEN,
        IN_TOKEN,
        LET_TOKEN,
        MACRO_TOKEN,
        MATCH_TOKEN,
        MOD_TOKEN,
        MODULE_TOKEN,
        MOVE_TOKEN,
        MUT_TOKEN,
        MUTABLE_TOKEN,
        NIL_TOKEN,
        NULL_TOKEN,
        OVERRIDE_TOKEN,
        PACKAGE_TOKEN,
        PRIV_TOKEN,
        PRIVATE_TOKEN,
        PUB_TOKEN,
        PUBLIC_TOKEN,
        RAW_TOKEN,
        REF_TOKEN,
        RETURN_TOKEN,
        SELF_TOKEN,
        STATIC_TOKEN,
        STRUCT_TOKEN,
        SUPER_TOKEN,
        SWITCH_TOKEN,
        THROW_TOKEN,
        TRAIT_TOKEN,
        TRUE_TOKEN,
        TRY_TOKEN,
        TYPE_TOKEN,
        TYPEDEF_TOKEN,
        TYPEOF_TOKEN,
        UNION_TOKEN,
        UNSAFE_TOKEN,
        USE_TOKEN,
        UNSIZED_TOKEN,
        VAR_TOKEN,
        VARIABLE_TOKEN,
        WHERE_TOKEN,
        WHILE_TOKEN,
    };

    return keywords;
}
