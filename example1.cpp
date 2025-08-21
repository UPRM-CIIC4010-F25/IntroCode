#include <iostream>
using namespace std;

double sum(double a, double b) {
    double sum = a + b;
    return sum;
}
int main()
{
    double num1 = 5;
    double num2, sum1;
    num2 = 12;
    sum1 = sum(num1, num2);
    cout << "The sum is " << sum1 << " Yay!";
    
}
