#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 2) return false;
    else if (num % 2 == 0) return false;
    else {
        int cnt = 0;
        for (int i = 3; i < num; i+=2) {
            if (num % i == 0) return false;
        }
        return true;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Is " << num << " prime? " << boolalpha << isPrime(num);
}
/*
Enter a number: 65
Is 65 prime? false

Enter a number: 24
Is 24 prime? false

Enter a number: 7
Is 7 prime? true
*/