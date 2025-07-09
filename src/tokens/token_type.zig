const standard: type = @import("std");

// Token Type Defintion
pub const TokenType: type = []const u8;

// Token Types
pub const CHARACTER_TOKEN: [9]TokenType = "CHARACTER";
pub const COMMENT_TOKEN: [7]TokenType = "COMMENT";
pub const DELIMITER_TOKEN: [9]TokenType = "DELIMITER";
pub const ESCAPE_TOKEN: [6]TokenType = "ESCAPE";
pub const FLAG_TOKEN: [4]TokenType = "FLAG";
pub const KEYWORD_TOKEN: [7]TokenType = "KEYWORD";
pub const NUMBER_TOKEN: [6]TokenType = "NUMBER";
pub const OPERATOR_TOKEN: [8]TokenType = "OPERATOR";

// Token Type Vector
pub fn token_types_vector() @Vector(7, TokenType) {
    const token_types: @Vector(7, TokenType) = @Vector(7, TokenType){
        CHARACTER_TOKEN,
        COMMENT_TOKEN,
        DELIMITER_TOKEN,
        ESCAPE_TOKEN,
        FLAG_TOKEN,
        KEYWORD_TOKEN,
        NUMBER_TOKEN,
        OPERATOR_TOKEN,
    };

    return token_types;
}
