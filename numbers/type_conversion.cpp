#include <iostream>
#include <string>

using namespace std;

void coercingRulesExample() {
    cout << "Coercing Rules Example" << endl;
    int int_v = 100;
    short short_v = 19;
    float float_v = 100.5;
    char char_v = 'd';

    // Print original values
    cout << "int int_v = " << int_v << "\nshort short_v = " << short_v << endl;
    cout << "float float_v = " << float_v << "\nchar char_v = " << char_v << endl;
    
    // Promotion of int and short to double
    cout << "What type will int_v * 0.5 be? " << typeid(int_v*0.5).name() << endl;
    cout << "What type will short_v + 0.5 be? " << typeid(short_v + 0.5).name() << endl;
    
    // Promotion of short to int
    cout << "What type will int_v + short_v be? " << typeid(short_v + int_v).name() << endl;
    
    // Promotion of int to float
    cout << "What type will float_v + value1 be? " << typeid(float_v + int_v).name() << endl;
    
    // Promotion of char to int (Lowest posible rank is int)
    cout << "What type will char_v + short_v be? " << typeid(short_v + char_v).name() << endl<< endl;

    int int_from_float = float_v;

    // Demotion of float to int 
    cout << "float_v is " << float_v << endl;
    cout << "After calling int int_from_float = float_v;" << endl;
    cout << "int_from_float is " << int_from_float << endl << endl;
}

void castingExample() {
    cout << "Casting Example" << endl;
    float float_val = 123.67;
    // Standard way
    int value1 = static_cast<int>(float_val);
    // C style
    int short_v = (int) float_val;

    cout << "OG value: " << float_val << endl;
    cout << "Converted the standard way: " << value1 << endl;
    cout << "Converted the C style way: " << short_v << endl;
    // Show that the original value doesn't get modified
    cout << "OG value again: " << float_val << endl << endl;
}
