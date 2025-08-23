#include<iostream>
#include<typeinfo>
#include<iomanip>
#include<string>
#include<cstdlib>

using namespace std;

void stringFormattingExample() {
    cout << "Formatting Example" << endl;

    // Test strings of different lengths
    string long_str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string short_str = "Hello";
    string lays_bag = "|      |";
    
    // Test numbers with different precisions
    float simple_float = 13.1f;
    double complex_double = 123.56789003;
    double long_double = 0.1678973e-4;

    // Demonstrate width setting
    cout << "After setting width to 10 with a string length > 10\n";
    // Will expand beyond 10
    cout << setw(10) << long_str << endl; 
    cout << "After setting width to 10 with a string length < 10\n";
    // Will align to the right since its length < 10
    cout << setw(10) << short_str << endl; 
    cout << "After setting width to 10 with string that has whitespaces\n";
    // Whitespace occupies space in the string
    cout << setw(10) << lays_bag << endl;
    
    // Demonstrate alignment
    cout << "Width is 10 and align to the left" << endl;
    // Align text to the left
    cout << setw(10) << left << short_str << endl;

    // Demonstrate floating point formatting
    cout << "\nFormatting Floating Point Numbers:" << endl;
    cout << "Values when assigned:" << endl;
    cout << "13.1f\t123.5678900\t0.1678973e-4"<< endl;
    
    // Default format
    cout << "Default formatting:" << endl;
    cout << simple_float << "\t" << complex_double << "\t" << long_double << endl;
    
    // Fixed notation
    cout << "Using fixed notation:\n";
    cout << fixed << simple_float << "\t" << complex_double << "\t" << long_double << endl;
    
    // Demonstrate precision control
    cout << "With 9 decimal places:" << endl; 
    cout << setprecision(9) << simple_float << "\t" << complex_double << "\t" << long_double << endl;
    
    // Reset formatting for future output
    cout.unsetf(ios::fixed);
    cout << setprecision(6) << endl;  // Reset to default precision
}
