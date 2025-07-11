#ifndef OPERATOR_TOKENS_HH
#define OPERATOR_TOKENS_HH

#include <string>
#include <vector>

namespace tokens {
    using namespace std;
    
    // Operator Token Defintion
    typedef string OperatorToken;
    
    // Operator Tokens
    const OperatorToken ADDITION_TOKEN = "+";
    const OperatorToken ADDITION_ASSIGNMENT_TOKEN = "+=";
    const OperatorToken AND_TOKEN = "&";
    const OperatorToken ANNOTATION_TOKEN = "@";
    const OperatorToken ASSIGNMENT_TOKEN = "=";
    const OperatorToken BITWISE_SHIFT_LEFT_TOKEN = "<<";
    const OperatorToken BITWISE_SHIFT_RIGHT_TOKEN = ">>";
    const OperatorToken BITWISE_SHIFT_LEFT_ASSIGNMENT_TOKEN = "<<=";
    const OperatorToken BITWISE_SHIFT_RIGHT_ASSIGNMENT_TOKEN = ">>=";
    const OperatorToken COLON_TOKEN = ":";
    const OperatorToken COMMA_TOKEN = ",";
    const OperatorToken DIVISION_TOKEN = "/";
    const OperatorToken DIVISION_ASSIGNMENT_TOKEN = "/=";
    const OperatorToken DOLLAR_SIGN_TOKEN = "$";
    const OperatorToken EQUALITY_TOKEN = "==";
    const OperatorToken EXCLUSIVE_OR_TOKEN = "^";
    const OperatorToken FIELD_ACCESS_TOKEN = ".";
    const OperatorToken GRAVE_ACCENT_TOKEN = "`";
    const OperatorToken GREATER_THAN_TOKEN = ">";
    const OperatorToken GREATER_OR_EQUAL_TOKEN = ">=";
    const OperatorToken INCLUSIVE_RANGE_TOKEN = "..=";
    const OperatorToken LAMBDA_TOKEN = "=>";
    const OperatorToken LEFT_ARROW_TOKEN = "<-";
    const OperatorToken LESS_THAN_TOKEN = "<";
    const OperatorToken LESS_OR_EQUAL_TOKEN = "<=";
    const OperatorToken MODULUS_TOKEN = "%";
    const OperatorToken MODULUS_ASSIGNMENT_TOKEN = "%=";
    const OperatorToken MULTIPLICATION_TOKEN = "*";
    const OperatorToken MULTIPLICATION_ASSIGNMENT_TOKEN = "*=";
    const OperatorToken NOT_TOKEN = "!";
    const OperatorToken NOT_EQUAL_TOKEN = "!=";
    const OperatorToken NULL_COALESCING_TOKEN = "?";
    const OperatorToken OR_TOKEN = "|";
    const OperatorToken PATH_SEPARATOR_TOKEN = "::";
    const OperatorToken RANGE_TOKEN = "..";
    const OperatorToken RETURN_TYPE_TOKEN = "->";
    const OperatorToken SEMI_COLON_TOKEN = ";";
    const OperatorToken SUBTRACTION_TOKEN = "-";
    const OperatorToken SUBTRACTION_ASSIGNMENT_TOKEN = "-=";
    const OperatorToken TILDE_TOKEN = "~";
    const OperatorToken UNDERSCORE_TOKEN = "_";
    const OperatorToken VARIADIC_RANGE_TOKEN = "...";
    
    // Operator Token Vector
    vector<OperatorToken> operators_vector();
}
#endif
