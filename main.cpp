#include <iostream>
#include "numbers/number_types.cpp"
#include "numbers/type_conversion.cpp"
#include "numbers/random_numbers.cpp"
#include "basics/io_examples.cpp"
#include "basics/char_examples.cpp"
#include "basics/variable_assigments.cpp"
#include "strings/string_ops.cpp"
#include "strings/string_format.cpp"

using namespace std;

int main() {
    
    cout << "\n=== Input/Output Examples ===\n";
    escapeSequencesExample();
    // Commented so they don't stop the flow of the program
    // multipleInputsExample();
    // readingInputExample1();
    // readingInputExample2();
    
    cout << "\n=== Character and Assignment Examples ===\n";
    assignmentsExample();
    characterExamples();

    cout << "\n=== Number Types, Conversion/Casting and Operations ===\n";
    numberExample();
    coercingRulesExample();
    castingExample();
    overflowExample();
    constantExample();
    
    cout << "\n=== String Manipulation ===\n";
    stringManipulationExample();

    cout << "\n=== String Formatting ===\n";
    stringFormattingExample();


    cout << "\n=== Random Numbers ===\n";
    randomExample();
    
    return 0;
}
