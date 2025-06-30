const standard: type = @import("std");

// Operator Token Defintion
pub const OperatorToken: type = []const u8;

// Operator Tokens
pub const ADDITION_TOKEN: [1]OperatorToken = "+";
pub const ADDITION_ASSIGNMENT_TOKEN: [2]OperatorToken = "+=";
pub const AND_TOKEN: [2]OperatorToken = "&&";
pub const ASSIGNMENT_TOKEN: [1]OperatorToken = "=";
pub const DIVISION_TOKEN: [1]OperatorToken = "/";
pub const DIVISION_ASSIGNMENT_TOKEN: [2]OperatorToken = "/=";
pub const EQUALITY_TOKEN: [2]OperatorToken = "==";
pub const GREATER_THAN_TOKEN: [1]OperatorToken = ">";
pub const GREATER_OR_EQUAL_TOKEN: [2]OperatorToken = ">=";
pub const LESS_THAN_TOKEN: [1]OperatorToken = "<";
pub const LESS_OR_EQUAL_TOKEN: [2]OperatorToken = "<=";
pub const MODULUS_TOKEN: [1]OperatorToken = "%";
pub const MODULUS_ASSIGNMENT_TOKEN: [2]OperatorToken = "%=";
pub const MULTIPLICATION_TOKEN: [1]OperatorToken = "*";
pub const MULTIPLICATION_ASSIGNMENT_TOKEN: [2]OperatorToken = "*=";
pub const NOT_TOKEN: [1]OperatorToken = "!";
pub const NOT_EQUAL_TOKEN: [2]OperatorToken = "!=";
pub const NULL_COALESCING_TOKEN: [1]OperatorToken = "?";
pub const OR_TOKEN: [2]OperatorToken = "||";
pub const SUBTRACTION_TOKEN: [1]OperatorToken = "-";
pub const SUBTRACTION_ASSIGNMENT_TOKEN: [2]OperatorToken = "-=";
pub const RANGE_TOKEN: [2]OperatorToken = "..";

// Operator Tokens Vector
pub fn operators_vector() @Vector(22, OperatorToken) {
    const operators: @Vector(22, OperatorToken) = @Vector(22, OperatorToken){
        ADDITION_TOKEN,
        ADDITION_ASSIGNMENT_TOKEN,
        AND_TOKEN,
        ASSIGNMENT_TOKEN,
        DIVISION_TOKEN,
        DIVISION_ASSIGNMENT_TOKEN,
        EQUALITY_TOKEN,
        GREATER_THAN_TOKEN,
        GREATER_OR_EQUAL_TOKEN,
        LESS_THAN_TOKEN,
        LESS_OR_EQUAL_TOKEN,
        MODULUS_TOKEN,
        MODULUS_ASSIGNMENT_TOKEN,
        MULTIPLICATION_TOKEN,
        MULTIPLICATION_ASSIGNMENT_TOKEN,
        NOT_TOKEN,
        NOT_EQUAL_TOKEN,
        NULL_COALESCING_TOKEN,
        OR_TOKEN,
        SUBTRACTION_TOKEN,
        SUBTRACTION_ASSIGNMENT_TOKEN,
        RANGE_TOKEN,
    };

    return operators;
}
