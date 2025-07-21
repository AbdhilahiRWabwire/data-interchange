#ifndef RESULT_TYPE_HH
#define RESULT_TYPE_HH

namespace errors {        
    // Custom Result Type Definition
    template<typename T>
    struct Resultant;
    
    // Initialize a Result with a Value
    template<typename T>
    Resultant<T> okay(T value);
    
    // Initialize a Result with a Error
    template<typename T>
    Resultant<T> error(T error);
}

#endif

