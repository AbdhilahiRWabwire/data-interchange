#ifndef ESCAPE_TOKENS_HH
#define ESCAPE_TOKENS_HH

#include <string>
#include <vector>

using namespace std;

// Escape Token Defintion
typedef string EscapeToken;

// Escape Tokens
const EscapeToken APOSTROPHE_TOKEN;
const EscapeToken BACKSLASH_TOKEN;
const EscapeToken CARRIAGE_RETURN_TOKEN;
const EscapeToken NEW_LINE_TOKEN;
const EscapeToken QUOTATION_MARK_TOKEN;
const EscapeToken TAB_TOKEN;

// Escape Token Vector
vector<EscapeToken> strings_vector();

#endif
