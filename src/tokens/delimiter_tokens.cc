#include <vector>
#include "./delimiter_tokens.hh"

namespace tokens {
    using namespace std;
    
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
}