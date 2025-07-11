#ifndef TOKEN_TYPE_HH
#define TOKEN_TYPE_HH

#include <string>
#include <vector>

namespace tokens {
    using namespace std;
    
    // Token Type Defintion
    typedef string TokenType;
    
    // Token Types
    const TokenType CHARACTER_TOKEN = "CHARACTER";
    const TokenType COMMENT_TOKEN = "COMMENT";
    const TokenType DELIMITER_TOKEN = "DELIMITER";
    const TokenType ESCAPE_TOKEN = "ESCAPE";
    const TokenType FLAG_TOKEN = "FLAG";
    const TokenType KEYWORD_TOKEN = "KEYWORD";
    const TokenType NUMBER_TOKEN = "NUMBER";
    const TokenType OPERATOR_TOKEN = "OPERATOR";
    
    // Token Type Vector
    vector<TokenType> token_types_vector();
}

#endif
