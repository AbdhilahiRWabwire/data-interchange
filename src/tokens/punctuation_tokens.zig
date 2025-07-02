const standard: type = @import("std");

// Punctuation Token Defintion
pub const PunctuationToken: type = []const u8;

//  Tokens
pub const APOSTROPHE_TOKEN: [2]PunctuationToken = "\'";
pub const COLON_TOKEN: [1]PunctuationToken = ":";
pub const COMMA_TOKEN: [1]PunctuationToken = ",";
pub const GRAVE_ACCENT_TOKEN: [2]PunctuationToken = "/`";
pub const QUOTATION_MARK_TOKEN: [2]PunctuationToken = "\"";

// String Token Vector
pub fn strings_vector() @Vector(5, PunctuationToken) {
    const strings: @Vector(5, PunctuationToken) = @Vector(5, PunctuationToken){
        APOSTROPHE_TOKEN,
        COLON_TOKEN,
        COMMA_TOKEN,
        GRAVE_ACCENT_TOKEN,
        QUOTATION_MARK_TOKEN,
    };

    return strings;
}
