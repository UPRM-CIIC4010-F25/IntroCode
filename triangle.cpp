#include<iostream>
#include<cmath>

// using namespace std;

int main() {
    int sideA, B, C;
    std::cout << "Give side A: ";
    std::cin >> sideA;
    std::cout << "Give side B: ";
    std::cin >> B;
    std::cout << "Give side C: ";
    std::cin >> C;
    double area, semiPerimeter;
    semiPerimeter = (sideA + B + C)/2;
    area = sqrt(semiPerimeter * (semiPerimeter-sideA) * (semiPerimeter-B) * (semiPerimeter - C));
    std::cout << "The area is: " << area;
    return 0;
}