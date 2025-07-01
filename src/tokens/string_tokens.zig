const standard: type = @import("std");

// String Token Defintion
pub const StringToken: type = []const u8;

// String Tokens
pub const APOSTROPHE_TOKEN: [2]StringToken = "\'";
pub const QUOTATION_MARK_TOKEN: [2]StringToken = "\"";

// String Token Vector
pub fn strings_vector() @Vector(2, StringToken) {
    const strings: @Vector(2, StringToken) = @Vector(2, StringToken){ APOSTROPHE_TOKEN, QUOTATION_MARK_TOKEN };

    return strings;
}
