const standard: type = @import("std");

// Delimiter Token Defintion
pub const DelimiterToken: type = []const u8;

// Delimiter Tokens
pub const LEFT_BRACKET_TOKEN: [1]DelimiterToken = "{";
pub const LEFT_PARENTHESIS_TOKEN: [1]DelimiterToken = "(";
pub const LEFT_SQUARE_BRACKET_TOKEN: [1]DelimiterToken = "[";
pub const RIGHT_BRACKET_TOKEN: [1]DelimiterToken = "}";
pub const RIGHT_PARENTHESIS_TOKEN: [1]DelimiterToken = ")";
pub const RIGHT_SQUARE_BRACKET_TOKEN: [1]DelimiterToken = "]";

// Delimiter Token Vector
pub fn delimiters_vector() @Vector(6, DelimiterToken) {
    const delimiters: @Vector(6, DelimiterToken) = @Vector(6, DelimiterToken){
        LEFT_BRACKET_TOKEN,
        LEFT_PARENTHESIS_TOKEN,
        LEFT_SQUARE_BRACKET_TOKEN,
        RIGHT_BRACKET_TOKEN,
        RIGHT_PARENTHESIS_TOKEN,
        RIGHT_SQUARE_BRACKET_TOKEN,
    };

    return delimiters;
}
