#include<iostream>

using namespace std;

void stringManipulationExample() {
    cout << "String Manipulation Example\n";

    // Basic string declarations
    string str1 = "Hello";
    string str2 = "World";
    string empty_str = "";

    // String concatenation
    string full_greeting = str1 + " " + str2 + "!";
    cout << "Concatenated string: " << full_greeting << endl;

    // String length
    cout << "Length of greeting: " << full_greeting.length() << endl;

    // Accessing individual characters
    cout << "First character: " << full_greeting[0] << endl;
    cout << "Last character: " << full_greeting[full_greeting.length()-1] << endl;

    // Substring
    cout << "First word: " << full_greeting.substr(0, 5) << endl;
    cout << "Second word: " << full_greeting.substr(6, 5) << endl;

    // String comparison
    if (str1 == "Hello") {
        cout << "str1 matches 'Hello'" << endl;
    }

    // Finding in string
    size_t found = full_greeting.find("World");
    if (found != string::npos) {
        cout << "'World' found at position: " << found << endl;
    }

    // String modification
    full_greeting.replace(0, 5, "Hi");
    cout << "After replacing 'Hello' with 'Hi': " << full_greeting << endl;

    // String empty check
    cout << "Is empty_str empty? " << (empty_str.empty() ? "Yes" : "No") << endl;
    cout << "Is str1 empty? " << (str1.empty() ? "Yes" : "No") << endl << endl;
}
