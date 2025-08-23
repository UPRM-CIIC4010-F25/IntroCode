#include<iostream>


void printN(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << i << std::endl;
    }
}

void printNNumbers(int n) {
    printN(n);
}
void printNSquareNumbers(int n)
{
    for (int i = 0; i < n; i++)
    {
        printN(n);
    }
}

int main() {
    printNNumbers(3);
    std::cout << "Now more numbers!" << std::endl;
    printNSquareNumbers(3);
}