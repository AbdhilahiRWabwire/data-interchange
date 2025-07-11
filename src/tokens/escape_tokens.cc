#include <vector>
#include "./escape_tokens.hh"

namespace tokens {
    using namespace std;
    
    // Escape Token Vector
    vector<EscapeToken> strings_vector() {
        const vector<EscapeToken> strings = {
            APOSTROPHE_TOKEN,
            BACKSLASH_TOKEN,
            CARRIAGE_RETURN_TOKEN,
            NEW_LINE_TOKEN,
            NULL_TOKEN,
            QUOTATION_MARK_TOKEN,
            TAB_TOKEN
        };
    
        return strings;
    }
}