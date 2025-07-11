#ifndef ESCAPE_TOKENS_HH
#define ESCAPE_TOKENS_HH

#include <string>
#include <vector>

// Escape Token Defintion
typedef std::string EscapeToken;

// Escape Tokens
const EscapeToken APOSTROPHE_TOKEN;
const EscapeToken BACKSLASH_TOKEN;
const EscapeToken CARRIAGE_RETURN_TOKEN;
const EscapeToken NEW_LINE_TOKEN;
const EscapeToken QUOTATION_MARK_TOKEN;
const EscapeToken TAB_TOKEN;

// Escape Token Vector
std::vector<EscapeToken> strings_vector();

#endif
