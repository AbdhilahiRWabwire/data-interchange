#ifndef OPTION_TYPE_HH
#define OPTION_TYPE_HH

namespace errors {    
    // Custom Option Type Definition
    template<typename T>
    struct Option;
    
    // Initialize a Option with a Value
    template<typename T>
    Option<T> some(T value);
    
    // Return a Null Option
    template<typename T>
    Option<T> none();
}

#endif
