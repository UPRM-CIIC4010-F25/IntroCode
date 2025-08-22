#include<iostream>
#include<typeinfo>
#include<iomanip>
#include<string>
#include<cstdlib>

using namespace std;
/*
    Covers:
    - Escape sequences
    - Multiple inputs
    - Input with cin
    - Input with getline()
*/
void escapeSequencesExample() {
    cout << "Escape Sequence Example\n";

    string hello = "Hello";
    string world = "World";
    // Text gets printed together
    cout << "No sequences used"<< endl;
    cout << hello;
    cout << world;
    // A newline separates the words
    cout << endl << "\\n used" << endl;
    cout << hello << endl;
    cout << world << "\n";
    // Tab separates the words
    cout << endl << "\\t used" << endl;
    cout << hello << "\t";
    cout << world << "\n";
    // Deletes the last character from hello before printing world
    cout << endl << "\\b used" << endl;
    cout << hello << "\b";
    cout << world << "\n";
    // Moves cursor back to beginning before printing world
    cout << endl << "\\r used" << endl;
    cout << hello << "\r";
    cout << world << "\n";
    // Sets an alarm
    cout << endl << "\\a used" << endl;
    cout << hello << "\a";
    cout << world << "\n";
    // Can print ' and " 
    cout << endl << "with quotes used" << endl;
    cout << "\'" << hello << "\' \"";
    cout << world << "\" \n\n";
}

void multipleInputsExample() {
    cout << "Multiple Input Example\n";

    // Three variables to be assigned through the console
    int day, month, year;
    cout << "Please enter day month year:\n";
    cout << "Separate each value with a whitespace or [Enter]\n";
    // Expectes three integers separated by whitespaces or [Enter]
    // What happens if it wasn't integers?
    cin >> day >> month >> year;
    cout << "Date given: " << day << "/" << month << "/" << year << endl;
}

void readingInputExample1(){
    cout << "Reading input examples using cin\n";

    string just_a_str = "";
    cout << "Enter two or more words to see what happens\n";
    cin >> just_a_str;
    // Output should only be first word
    cout << "Input received was: " << just_a_str << endl;
    cout << "It only printed the first value\n";
    cout << "Let's call it again\n";
    cin >> just_a_str;
    // We didn't even get a chance to enter input
    cout << "Input received was: " << just_a_str << endl;
    cout << "Oops it got the values we were missing\n";
}

void readingInputExample2() {
    cout << "Reading input examples using getline()\n";
    string just_a_str = "";
    cout << "Enter two words to see what happens\n";
    getline(cin, just_a_str);
    cout << "Input received was: " << just_a_str << endl;
    cout << "It printed everything\n";

    // Ignoring the first 5 characters
    cout << "Write a 6+ letter sentence\n";
    getline(cin.ignore(5), just_a_str);
    cout << "Input received was: " << just_a_str << endl;
    // Ignoring the first 5 characters or stop when we find 'g'
    cout << "Write a that has g in its first 4 letters\n";
    getline(cin.ignore(5, 'g'), just_a_str);
    cout << "Input received was: " << just_a_str << endl << endl;

}