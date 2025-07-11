#include <string>
#include <vector>

// Token Type Defintion
typedef std::string TokenType;

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
std::vector<TokenType> token_types_vector() {
    const std::vector<TokenType> token_types = {
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
