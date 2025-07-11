#include <string>
#include <vector>

using namespace std;

// Escape Token Defintion
typedef string EscapeToken;

// Escape Tokens
const EscapeToken APOSTROPHE_TOKEN = "\'";
const EscapeToken BACKSLASH_TOKEN = "\\";
const EscapeToken CARRIAGE_RETURN_TOKEN = "\r";
const EscapeToken NEW_LINE_TOKEN = "\n";
const EscapeToken QUOTATION_MARK_TOKEN = "\"";
const EscapeToken TAB_TOKEN = "\t";

// Escape Token Vector
vector<EscapeToken> strings_vector() {
    const vector<EscapeToken> strings = {
        APOSTROPHE_TOKEN,
        BACKSLASH_TOKEN,
        CARRIAGE_RETURN_TOKEN,
        NEW_LINE_TOKEN,
        QUOTATION_MARK_TOKEN,
        TAB_TOKEN
    };

    return strings;
}
