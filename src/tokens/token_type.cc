#include <vector>
#include "./token_type.hh"

namespace tokens {
    using namespace std;
    
    // Token Type Vector
    vector<TokenType> token_types_vector() {
        const vector<TokenType> token_types = {
            CHARACTER_TOKEN,
            COMMENT_TOKEN,
            DELIMITER_TOKEN,
            ESCAPE_TOKEN,
            FLAG_TOKEN,
            KEYWORD_TOKEN,
            NUMBER_TOKEN,
            OPERATOR_TOKEN,
        };
    
        return token_types;
    }
}