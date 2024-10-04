#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

double f(double x) {
    static const double pi = atan(1.0)*4.0;
    return exp(-x*x/2)/sqrt(2*pi);
}

int main() {
    double x, a, b, n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter n: ";
    cin >> n;

    for (int k)
}