#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    double r1;
    printf("Enter the first resistance: ");
    cin >> r1;

    double r2;
    printf("Enter the second resistance: ");
    cin >> r2;

    double r3;
    printf("Enter the third resistance: ");
    cin >> r3;

    double v;
    printf("Enter the voltage: ");
    cin >> v;

    double c1, c2, c3, r;

    c1 = (int)v / r1;
    c2 = (int)v / r2;
    c3 = (int)v / r3;
    r = 5.0 / (c1 + c2 + c3);

    printf("The currents are %.3f, %.3f, and %.3f\n", c1, c2, c3);
    printf("The resistance is %.3f", r);
}
/*
Enter the first resistance: 500
Enter the second resistance: 1000
Enter the third resistance: 2500
Enter the voltage: 5
The currents are 0.010, 0.005, and 0.002
The resistance is 294.118
*/