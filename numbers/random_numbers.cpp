#include <iostream>
#include <string>

using namespace std;

void randomExample() {
    cout << "Random value example\n";
    /* 
    This assigns the seed, this determines which sequence of random
    numbers are given 
    */
    srand(15);
    // Printing 5 random values
    cout << "Printing 5 random values\n";
    for(int i = 0; i < 5; i++)
        cout << rand()<<endl;
    // Print 5 random values between 1 and 10
    int max = 10;
    cout << "Print 5 random values between 1 and " << max << endl;
    for(int i = 0; i < 5; i++)
        // Modulus forces the number to be between 0 and max - 1
        // Plus 1 to shift it to 1 and max
        cout << (rand() % max) + 1 <<endl;
}
