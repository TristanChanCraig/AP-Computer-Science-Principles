#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Enter the first number: ";
    cin >> num1;

    int num2;
    cout << "Enter second number: ";
    cin >> num2;

    int num3;
    cout << "Enter the third number: ";
    cin >> num3;

    int num4;
    cout << "Enter the fourth number: ";
    cin >> num4;

    int sum = num1 + num2 + num3 + num4;
    double avg = (num1 + num2 + num3 + num4) / 4.0;

    cout << "The sum of the four numbers is: " << sum << endl;
    cout << "The average of the four numbers is: " << avg;
}
/*
Enter the first number: 475
Enter second number: 821
Enter the third number: 369
Enter the fourth number: 562
The sum of the four numbers is: 2227
The average of the four numbers is: 556.75
*/