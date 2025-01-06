// A formal data type is a precisely defined abstraction used in programming and computer science to specify the type of data that a variable or function can hold or return. It is described using a formal system with strict rules, often grounded in mathematics and logic. This ensures that the data is used consistently and correctly throughout a program.

// Key Characteristics of Formal Data Types:
// Precision and Un-ambiguity:

// Defined using formal grammar or syntax, ensuring no ambiguity in interpretation.
// Type Safety:

// Prevents operations that are invalid for the given type (e.g., adding a string to an integer).
// Predictable Behavior:

// A formal type system guarantees that operations on data types behave consistently.
// Verification:

// Aids in static analysis and formal verification to check program correctness before execution.

// formal DT
int add (int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}
// Here, int and float are formal data types, and the compiler ensures that the correct version of the function is invoked depending on the argument type.


// Ambiguity refers to a situation where a statement, expression, or structure can have multiple valid interpretations or meanings.

// 1. Syntactic Ambiguity: occurs when a code structure can be parsed in more than on way.
    int *ptr, x;

    // a clearer way :
    int *ptr ;
    int x;

// 2. Semantic Ambiguity: occurs whn the meaning of an operation depends on context
    int x = 5 /2 ;
    int y = 5 /2;

// 3. Lexical Ambiguity: occurs when the same token can represent different things.
    // print("Hello", + 5); // error - ambiguous addition between string and integer
