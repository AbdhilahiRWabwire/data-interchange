const standard: type = @import("std");

// Escape Token Defintion
pub const EscapeToken: type = []const u8;

// Escape Tokens
pub const APOSTROPHE_TOKEN: [2]EscapeToken = "\'";
pub const BACKSLASH_TOKEN: [2]EscapeToken = "\\";
pub const CARRIAGE_RETURN_TOKEN: [2]EscapeToken = "\r";
pub const NEW_LINE_TOKEN: [2]EscapeToken = "\n";
pub const QUOTATION_MARK_TOKEN: [2]EscapeToken = "\"";
pub const TAB_TOKEN: [2]EscapeToken = "\t";

// Escape Token Vector
pub fn strings_vector() @Vector(6, EscapeToken) {
    const strings: @Vector(6, EscapeToken) = @Vector(6, EscapeToken){ APOSTROPHE_TOKEN, BACKSLASH_TOKEN, CARRIAGE_RETURN_TOKEN, NEW_LINE_TOKEN, QUOTATION_MARK_TOKEN, TAB_TOKEN };

    return strings;
}
