#ifndef TOKEN_TYPE_HH
#define TOKEN_TYPE_HH

#include <string>
#include <vector>

// Token Type Defintion
typedef std::string TokenType;

// Token Types
const TokenType CHARACTER_TOKEN;
const TokenType COMMENT_TOKEN;
const TokenType DELIMITER_TOKEN;
const TokenType ESCAPE_TOKEN;
const TokenType FLAG_TOKEN;
const TokenType KEYWORD_TOKEN;
const TokenType NUMBER_TOKEN;
const TokenType OPERATOR_TOKEN;

// Token Type Vector
std::vector<TokenType> token_types_vector();

#endif
