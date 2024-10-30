#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

const double a = -4;
const double a1 = 31.1767;
const double a2 = -52.0433;
const double a3 = 34.7625;
const double a4 = -10.9167;
const double a5 = 1.6108;
const double a6 = -0.09;

double f(double x) {
    return (a6*pow(x,6) + a5*pow(x,5) + a4*pow(x,4) + a3*pow(x,3) + a2*pow(x,2) + a1*x + a);
}

double fd(double x) {
    return (6*a6*pow(x,5) + 5*a5*pow(x,4) + 4*a4*pow(x,3) + 3*a3*pow(x,2) + 2*a2*x + a1);
}

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Initial Position: f(" << num << ") = " << f(num) << endl;
    while (abs(f(num)) > 0.001) {
        num = num - (f(num) / fd(num));
        cout << "Refined zero: f(" << num  << ") = " << f(num) << endl;
    }
}
/*
Initial Position: f(4) = -1.042
Refined zero: f(3.56235) = 0.239911
Refined zero: f(3.64288) = -0.00504826
Refined zero: f(3.64125) = -1.07053e-06
*/