#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    printf("Please give length of side A: ");
    scanf("%d", &a);
    printf("Please give length of side B: ");
    scanf("%d", &b);
    printf("Please give length of side C: ");
    scanf("%d", &c);
    // printf("Side A is %d", a);
    double area, semiPerimeter;
    semiPerimeter = (a + b + c)/2;
    area = sqrt(semiPerimeter * (semiPerimeter-a) * (semiPerimeter-b) * (semiPerimeter - c));
    printf("The area is: %f", area);
    return 0;
}