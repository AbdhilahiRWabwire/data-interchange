#ifndef DELIMITER_TOKENS_HH
#define DELIMITER_TOKENS_HH

#include <string>
#include <vector>

using namespace std;

// Delimiter Token Defintion
typedef string DelimiterToken;

// Delimiter Tokens
const DelimiterToken LEFT_BRACKET_TOKEN;
const DelimiterToken LEFT_PARENTHESIS_TOKEN;
const DelimiterToken LEFT_SQUARE_BRACKET_TOKEN;
const DelimiterToken RIGHT_BRACKET_TOKEN;
const DelimiterToken RIGHT_PARENTHESIS_TOKEN;
const DelimiterToken RIGHT_SQUARE_BRACKET_TOKEN;

// Delimiter Token Vector
vector<DelimiterToken> delimiters_vector();

#endif
