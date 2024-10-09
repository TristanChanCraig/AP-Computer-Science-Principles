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

    double h = (b - a)/n;
    double total = h * (f(a) + f(a + h) + f(a + 2 * h) + f(a + 3 * h));

    printf("The approximate area under the curve is %.4f", total);
}
/*
Enter x: 1
Enter a: 2
Enter b: 3
Enter n: 4
The approximate area under the curve is 0.0281
*/