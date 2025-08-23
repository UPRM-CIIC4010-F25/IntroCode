#include <iostream>
#include <string>

using namespace std;

void characterExamples() {
    cout << "Character Example\n";

    // Characters only hold a single value
    char c = 'C';
    /* 
    Characters are mapped to integer values
    given by ASCII encoding format
    */
    // This represents C
    char cnum = 67;

    // Converting a letter to its position in the alphabet
    int alphabetical_position = c - 'A' + 1;

    string im_here = "I'm a string!";

    cout << "This is a character: " << c << endl;
    cout << "Character created using its ASCII code: " << cnum << endl;
    cout << "Position of this character in the alphabet: " << alphabetical_position << endl;
    cout << im_here << endl << endl;
}
