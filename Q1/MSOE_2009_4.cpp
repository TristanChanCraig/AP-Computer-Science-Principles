#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

double f(double x) {
    static const double pi = atan(1.0)*4.0;
    return exp(-x*x/2)/sqrt(2*pi);
}

int main() {
    double a, b, n;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter n: ";
    cin >> n;

    double h = (b - a)/n;
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += f(a + i * h);
    }
    total *= h;

    printf("The approximate area under the curve is %.4f", total);
}
/*
Enter a: 0
Enter b: 4
Enter n: 8
The approximate area under the curve is 0.5997
*/