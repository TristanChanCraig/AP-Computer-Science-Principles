#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double p;
    cout << "Enter the amount: ";
    cin >> p;

    double r;
    cout << "Enter the interest rate: ";
    cin >> r;

    int n;
    cout << "Enter the number of times compunded per year: ";
    cin >> n;

    int t;
    cout << "Enter the number of days at interest: ";
    cin >> t;

    double amt = p * pow((1 + ((0.01 * r) / n)), ((n * t)/365));
    double gain = amt - p;

    cout << "Interest Earned: $" << gain << endl;
    cout << "Total Amount in Savings: $" << amt;
}
/*
Enter the amount: 5000
Enter the interest rate: 11.5
Enter the number of times compunded per year: 365
Enter the number of days at interest: 900
Interest Earned: $1638.96
Total Amount in Savings: $6638.96
*/