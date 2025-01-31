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
    c = x&0b11000010;
    cout << "Clearing the 4th bit of x: " << c << endl;
    c = x|0b00000100;
    cout << "Setting the 2nd bit of x: " << c << endl;
    c = x^0b01000000;
    cout << "Toggling the 6th bit of x: " << c << endl;
    c = x&0b00111000;
    c = c >> 3;
    cout << "Extracting bits 2 to 4 from x: " << c << endl;

    int m = 5;
    int n = 9;
    n = n << 8;
    int packed = m + n;
    cout << "Packing m + n: " << packed << endl;
    m = packed & 0b0000000011111111;
    n = packed & 0b1111111100000000;
    n = n >> 8;
    cout << "Unpacking should give back m = " << m << " and n = " << n << endl;
    int y = 75;
    int bit1 = y & 0b00000010;
    int bit4 = y & 0b00010000;
    bit1 = bit1 >> 1;
    bit4 = bit4 >> 4;
    if (bit1 == 1) y = y | 0b00010000;
    else y = y & 0b11101111;
    if (bit4 == 1)  y = y | 0b00000010;
    else y = y & 0b11111101;
    cout << "Swapping the 1st and 4th bit of y = 75 should result in " << y << endl;
}
/*
a & b = 13
a | b = 31
a ^ b = 18
~a = -30
a << 2 = 116
b >> 2 = 3
Clearing the 4th bit of x: 194
Setting the 2nd bit of x: 206
Toggling the 6th bit of x: 138
Extracting bits 2 to 4 from x: 1
Packing m + n: 2309
Unpacking should give back m = 5 and n = 9
Swapping the 1st and 4th bit of y = 75 should result in 89
*/