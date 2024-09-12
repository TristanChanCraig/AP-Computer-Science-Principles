#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14159;

    double rad;
    cout << "Enter the radius: ";
    cin >> rad;

    double circum = 2 * rad * pi;
    double area = rad * rad * pi;

    cout << "The radius of the circle: " << rad << endl;
    cout << "The circumference of the circle: " << circum << endl;
    cout << "The area of the circle: " << area << endl;
}
/*
Enter the radius: 3.712
The radius of the circle: 3.712
The circumference of the circle: 23.3232
The area of the circle: 43.2878
*/