#include <optional>
#include "result_type.hh"

namespace errors {
    using namespace std;
    
    // Custom Result Type Definition
    template<typename T>
    struct Resultant {
        bool error;
        optional<T> error_value;
        optional<T> result_value;
    };
    
    // Initialize a Result with a Value
    template<typename T>
    Resultant<T> okay(T value) {
        const Resultant<T> result;
        result.error = false;
        result.error_value = nullopt;
        result.result_value = value; 
    
        return result;
    }
    
    // Initialize a Result with a Error
    template<typename T>
    Resultant<T> error(T error) {
        const Resultant<T> result;
        result.error = true;
        result.error_value = error;
        result.result_value = nullopt;
    
        return result;
    }
}
