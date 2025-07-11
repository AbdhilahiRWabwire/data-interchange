#include <string>
#include <vector>

using namespace std;

// Delimiter Token Defintion
typedef string DelimiterToken;

// Delimiter Tokens
const DelimiterToken LEFT_BRACKET_TOKEN = "{";
const DelimiterToken LEFT_PARENTHESIS_TOKEN = "(";
const DelimiterToken LEFT_SQUARE_BRACKET_TOKEN = "[";
const DelimiterToken RIGHT_BRACKET_TOKEN = "}";
const DelimiterToken RIGHT_PARENTHESIS_TOKEN = ")";
const DelimiterToken RIGHT_SQUARE_BRACKET_TOKEN = "]";

// Delimiter Token Vector
vector<DelimiterToken> delimiters_vector() {
    const vector<DelimiterToken> delimiters = {
        LEFT_BRACKET_TOKEN,
        LEFT_PARENTHESIS_TOKEN,
        LEFT_SQUARE_BRACKET_TOKEN,
        RIGHT_BRACKET_TOKEN,
        RIGHT_PARENTHESIS_TOKEN,
        RIGHT_SQUARE_BRACKET_TOKEN,
    };

    return delimiters;
}
