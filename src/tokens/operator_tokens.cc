#include <vector>
#include "./operator_tokens.hh"

namespace tokens {
    using namespace std;
    
    // Operator Token Vector
    vector<OperatorToken> operators_vector() {
        const vector<OperatorToken> operators = {
            ADDITION_TOKEN,
            ADDITION_ASSIGNMENT_TOKEN,
            AND_TOKEN,
            ANNOTATION_TOKEN,
            ASSIGNMENT_TOKEN,
            BITWISE_SHIFT_LEFT_TOKEN,
            BITWISE_SHIFT_RIGHT_TOKEN,
            BITWISE_SHIFT_LEFT_ASSIGNMENT_TOKEN,
            BITWISE_SHIFT_RIGHT_ASSIGNMENT_TOKEN,
            COLON_TOKEN,
            COMMA_TOKEN,
            DIVISION_TOKEN,
            DIVISION_ASSIGNMENT_TOKEN,
            DOLLAR_SIGN_TOKEN,
            EQUALITY_TOKEN,
            EXCLUSIVE_OR_TOKEN,
            FIELD_ACCESS_TOKEN,
            GRAVE_ACCENT_TOKEN,
            GREATER_THAN_TOKEN,
            GREATER_OR_EQUAL_TOKEN,
            INCLUSIVE_RANGE_TOKEN,
            LAMBDA_TOKEN,
            LEFT_ARROW_TOKEN,
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
            PATH_SEPARATOR_TOKEN,
            RANGE_TOKEN,
            RETURN_TYPE_TOKEN,
            SEMI_COLON_TOKEN,
            SUBTRACTION_TOKEN,
            SUBTRACTION_ASSIGNMENT_TOKEN,
            TILDE_TOKEN,
            UNDERSCORE_TOKEN,
            VARIADIC_RANGE_TOKEN,
        };
    
        return operators;
    }
}