#include <string>
#include <vector>

// Delimiter Token Defintion
typedef std::string DelimiterToken;

// Delimiter Tokens
const DelimiterToken LEFT_BRACKET_TOKEN = "{";
const DelimiterToken LEFT_PARENTHESIS_TOKEN = "(";
const DelimiterToken LEFT_SQUARE_BRACKET_TOKEN = "[";
const DelimiterToken RIGHT_BRACKET_TOKEN = "}";
const DelimiterToken RIGHT_PARENTHESIS_TOKEN = ")";
const DelimiterToken RIGHT_SQUARE_BRACKET_TOKEN = "]";

// Delimiter Token Vector
std::vector<DelimiterToken> delimiters_vector() {
    const std::vector<DelimiterToken> delimiters = {
        LEFT_BRACKET_TOKEN,
        LEFT_PARENTHESIS_TOKEN,
        LEFT_SQUARE_BRACKET_TOKEN,
        RIGHT_BRACKET_TOKEN,
        RIGHT_PARENTHESIS_TOKEN,
        RIGHT_SQUARE_BRACKET_TOKEN,
    };

    return delimiters;
}
