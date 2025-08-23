#include <iostream>
#include <bitset>

using namespace std;

void numberExample() {
    cout << "Number Example\n";

    // Floating point values
    float float_value = 456.9743f;
    double double_value = 1.3456E3;
    float float_value2 = 2.278098E-4;

    // Hexadecimal values
    int hex = 0xF;
    int hex2 = 0x9;
    // Octal values
    int oct = 011;

    cout << "Float values\n";
    cout << float_value << endl;
    cout << float_value2 << endl;
    cout << "Double values\n";
    cout << double_value << endl;
    cout << "Hexadecimal values\n";
    cout << hex << endl;
    cout << hex2 << endl;
    cout << hex + hex2 << endl;
    cout << "Octal values\n";
    cout << oct << endl << endl;

    // Passing a float to an int
    int just_an_int = float_value;
    // Passing an int to a float
    float just_a_float = just_an_int;

    cout << "Just an integer: " << just_an_int << endl;
    cout << "Just an float: " << just_a_float << endl;

    double largest_num = 9E20;
    long long int largest_int = largest_num;
    cout << "The largest double number: " << largest_num << endl;
    cout << "The largest number as an integer: " << largest_int << endl;

    bool isLarger = largest_num > double_value;
    cout << boolalpha;
    cout << "Is this larger? 9E20 > 1.3456E3?" << isLarger << endl;

    cout << "Size of a long long int: " << sizeof(long long) << endl;
    cout << "Size of largest number: " << sizeof(largest_int) << endl;

    cout << "Integer division: 1/2 = " << 1/2 << endl;
    cout << "Float division: 1.0/2 = " << 1.0/2 << endl << endl;
}

void overflowExample() {
    cout << "Overflow Example" << endl;
    // We assign it at its maximum value
    short regularValue = 32767;
    cout << "short regularValue = 32767;" << endl;
    // We add +1
    regularValue++;
    cout << "after regularValue + 1" << endl;
    // Now it suddenly became negative, why?
    cout << "regularValue = " << regularValue << endl;

    // Let's do this again but with the bits
    cout << "Let's do this again but let's look at the bits\n";
    regularValue = 32767;
    cout << "regularValue = 32767 (" << bitset<16>(regularValue) << ")\n";
    regularValue++;
    cout << "after regularValue + 1" << endl;
    // Now it suddenly became negative, why?
    cout << "regularValue = -32768 (" << bitset<16>(regularValue) << ")\n\n";
}

void constantExample() {
    cout << "Constant Example" << endl;
    // Usually named in all caps 
    const float PI = 3.14;
    float radius = 12;
    cout << "PI= "<< PI << endl;
    cout << "radius = " << radius << endl;
    cout << "Area of circle: " << PI*pow(radius, 2) << endl << endl;
    // PI++; // Uncomment to receive error
}
