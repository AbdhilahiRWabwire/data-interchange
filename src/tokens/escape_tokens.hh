#ifndef ESCAPE_TOKENS_HH
#define ESCAPE_TOKENS_HH

#include <string>
#include <vector>

namespace tokens {
    using namespace std;
    
    // Escape Token Defintion
    typedef string EscapeToken;
    
    // Escape Tokens
    const EscapeToken APOSTROPHE_TOKEN = "\'";
    const EscapeToken BACKSLASH_TOKEN = "\\";
    const EscapeToken CARRIAGE_RETURN_TOKEN = "\r";
    const EscapeToken NEW_LINE_TOKEN = "\n";
    const EscapeToken NULL_TOKEN = "\0";
    const EscapeToken QUOTATION_MARK_TOKEN = "\"";
    const EscapeToken TAB_TOKEN = "\t";
    
    // Escape Token Vector
    vector<EscapeToken> strings_vector();
}

#endif
