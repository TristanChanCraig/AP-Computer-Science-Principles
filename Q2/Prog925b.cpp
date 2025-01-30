#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int a = 29;
    int b = 15;
    int c = a&b;
    cout << "a & b = " << c << endl;
    c = a|b;
    cout << "a | b = " << c << endl;
    c = a^b;
    cout << "a ^ b = " << c << endl;
    c = ~a;
    cout << "~a = " << c << endl;
    c = a<<2;
    cout << "a << 2 = " << c << endl;
    c = b>>2;
    cout << "b >> 2 = " << c << endl;

    int x = 0b11001010;
    c = x&0b1101010;
    cout << "Clearing the 4th bit of x: " << c << endl;
    c = x|0b11001110;
    cout << "Setting the 2nd bit of x: " << c << endl;
    c = x^0b11000010;
    cout << "Toggling the 6th bit of x: " << c << endl;
    c = x&0b11000010;
    cout << "Extracting bits 2 to 4 from x: " << c << endl;
}
