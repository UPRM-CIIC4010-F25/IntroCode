#include <iostream>
#include <string>

using namespace std;

void assignmentsExample() {
    cout << "Assignment Example" << endl;
    int a, b, c, d, e;
    // Must be declared first for this to work
    a = b = c = d = e = 10;
    // Otherwise we assign like this
    int val1 = 5, val2 = 2;

    // Apply all assignment shorthands
    a += val1;
    b -= val1;
    c *= val1;
    d /= val1;
    e %= val1;
    // Apply shorthand on an expression
    val2 *= val1 + 12;  // val2 = val2 * (val1+12)

    cout << "a = b = c = d = e = 10;" << endl;
    cout << "val1 = 5;" << endl;
    cout << "a+=val1 -> " << a << endl; 
    cout << "b-=val1 -> " << b << endl; 
    cout << "c*=val1 -> " << c << endl; 
    cout << "d/=val1 -> " << d << endl; 
    cout << "e%=val1 -> " << e << endl;

    cout << "\nval2=2\n";
    // We can assign expressions as well
    cout << "val2 *= val1 + 12 -> " << val2 << endl << endl;

    // Short hand notation for incrementing by one
    // This first passes its value to cout and then increments it
    cout << val2++ << endl;
    // This first increments the value and then passes it to cout
    cout << ++val2 << endl;
}