#include <optional>

namespace errors {
    using namespace std;
    
    // Custom Option Type Definition
    template<typename T>
    struct Option {
        bool null;
        optional<T> option_value;
    };
    
    // Initialize a Option with a Value
    template<typename T>
    Option<T> some(T value) {
        const Option<T> option;
        option.null = false;
        option.value = value;
    
        return option;
    }
    
    // Return a Null Option
    template<typename T>
    Option<T> none() {
        const Option<T> option;
        option.null = true;
        option.value = nullopt;
            
        return option;
    }
}
