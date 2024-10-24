#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    else {
        int cnt = 0;
        for (int i = 1; i <= num; i++) if (num % i == 0) cnt++;
        if (cnt > 2) return false;
        else return true;
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