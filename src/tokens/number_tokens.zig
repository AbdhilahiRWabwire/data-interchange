const standard: type = @import("std");

// Number Token Defintion
pub const NumberToken: type = []const u8;

// Number Tokens
pub const ZERO_TOKEN: [1]NumberToken = "0";
pub const ONE_TOKEN: [1]NumberToken = "1";
pub const TWO_TOKEN: [1]NumberToken = "2";
pub const THREE_TOKEN: [1]NumberToken = "3";
pub const FOUR_TOKEN: [1]NumberToken = "4";
pub const FIVE_TOKEN: [1]NumberToken = "5";
pub const SIX_TOKEN: [1]NumberToken = "6";
pub const SEVEN_TOKEN: [1]NumberToken = "7";
pub const EIGHT_TOKEN: [1]NumberToken = "8";
pub const NINE_TOKEN: [1]NumberToken = "9";

// Number Tokens Vector
pub fn numbers_vector() @Vector(10, NumberToken) {
    const numbers: @Vector(10, NumberToken) = @Vector(10, NumberToken){
        ZERO_TOKEN,
        ONE_TOKEN,
        TWO_TOKEN,
        THREE_TOKEN,
        FOUR_TOKEN,
        FIVE_TOKEN,
        SIX_TOKEN,
        SEVEN_TOKEN,
        EIGHT_TOKEN,
        NINE_TOKEN,
    };

    return numbers;
}
