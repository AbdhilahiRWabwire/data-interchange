#include <string>
#include <vector>

using namespace std;

// Number Token Defintion
typedef string NumberToken;

// Number Tokens
const NumberToken ZERO_TOKEN = "0";
const NumberToken ONE_TOKEN = "1";
const NumberToken TWO_TOKEN = "2";
const NumberToken THREE_TOKEN = "3";
const NumberToken FOUR_TOKEN = "4";
const NumberToken FIVE_TOKEN = "5";
const NumberToken SIX_TOKEN = "6";
const NumberToken SEVEN_TOKEN = "7";
const NumberToken EIGHT_TOKEN = "8";
const NumberToken NINE_TOKEN = "9";

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
