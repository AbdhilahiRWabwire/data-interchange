#include <vector>
#include "./number_tokens.hh"

namespace tokens {
    using namespace std;
    
    // Number Token Vector
    vector<NumberToken> numbers_vector() {
        const vector<NumberToken> numbers = {
            ZERO_TOKEN,
            ONE_TOKEN,
            TWO_TOKEN,
            THREE_TOKEN,
            FOUR_TOKEN,
            FIVE_TOKEN,
            SIX_TOKEN,
            SEVEN_TOKEN,
            EIGHT_TOKEN,
            NINE_TOKEN,
        };
    
        return numbers;
    }
}