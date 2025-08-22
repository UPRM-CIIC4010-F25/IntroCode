#include<iostream>
#include<typeinfo>
#include<iomanip>
#include<string>
#include<cstdlib>

using namespace std;
/*
    Covers:
    - Assigment
    - Characters
    - Numbers
    - Coercing rules
    - Casting
    - Overflow example
    - Constant
    - Random number
*/

void assignmentsExample() {
    cout << "Assigment Example" << endl;
    int a, b, c, d, e;
    // Must be declared first for this to work
    a = b = c = d = e = 10;
    // Otherwise we assign like this
    int val1 = 5, val2 = 2;

    // Apply all assignment shorthands
    a+=val1;
    b-=val1;
    c*=val1;
    d/=val1;
    e%=val1;
    // Apply shorthand on an expression
    val2 *= val1 + 12;// val2 = val2 * (val1+12)

    cout << "a = b = c = d = e = 10;" << endl;
    cout << "val1 = 5;" << endl;
    cout << "a+=val1 -> " << a << endl; 
    cout << "b-=val1 -> " << b << endl; 
    cout << "c*=val1 -> " << c << endl; 
    cout << "d/=val1 -> " << d << endl; 
    cout << "e%=val1 -> " << e << endl;

    cout<<"\nval2=2\n";
    // We can assign expressions as well
    cout << "val2 *= val1 + 12 -> " << val2 << endl << endl;

    // Short hand notation for incrementing by one
    // This first passes its value to cout ad then increments it
    cout << val2++ << endl;
    // This first increments the value and then passes it to cout
    cout << ++val2 << endl;
}
void characterExamples() {
    cout << "Character Example\n";

    // Characters only hold a single value
    char c = 'C';
    /* 
    Characters are mapped to integer values
    given by ASCII enconding format
    */
   // This represnets C
    char cnum = 67;

    // Converting a letter to its position in the alphabet
    int alphaphetical_position = c - 'A' + 1;

    string im_here = "I'm a string!";

    cout << "This is a character: " << c << endl;
    cout << "Character created using it's ASCII code: " << cnum << endl;
    cout << "Position of this caracter in the alphabet: " << alphaphetical_position <<endl;

    cout << im_here << endl << endl;

}
