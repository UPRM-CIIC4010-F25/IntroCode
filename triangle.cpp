#include<iostream>
#include<cmath>

// using namespace std;

int main() {
    int A, B, C;
    std::cout << "Give side A: ";
    std::cin >> A;
    std::cout << "Give side B: ";
    std::cin >> B;
    std::cout << "Give side C: ";
    std::cin >> C;
    double area, semiPerimeter;
    semiPerimeter = (A + B + C)/2;
    area = sqrt(semiPerimeter * (semiPerimeter-A) * (semiPerimeter-B) * (semiPerimeter - C));
    std::cout << "The area is: " << area;
    return 0;
}