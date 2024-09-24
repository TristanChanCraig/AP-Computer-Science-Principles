#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    double r1;
    printf("Enter the first resistance: ");
    scanf("%lf", &r1);

    double r2;
    printf("Enter the second resistance: ");
    scanf("%lf", &r2);

    double r3;
    printf("Enter the third resistance: ");
    scanf("%lf", &r3);

    double v;
    printf("Enter the voltage: ");
    scanf("%lf", &r3);

    double c1, c2, c3, r;
    c1 = v / r1;
    c2 = v / r2;
    c3 = v / r3;
    r = 5 / (c1 + c2 + c3);

    printf("The currents are %.2f, %.2f, and %.2f\n", c1, c2, c3);
    printf("The resistance is %.2f", r);
}