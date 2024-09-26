#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int cnt = num - 1; // 1 is not prime
    for (int i = 1; i <= num; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                cnt--;
                break;
            }
        }
    }

    printf("The number of prime integers between 1 and %d, inclusive, is %d", num, cnt);
}
/*
Enter the number: 10
The number of prime integers between 1 and 10, inclusive, is 4

Enter the number: 100
The number of prime integers between 1 and 100, inclusive, is 25

Enter the number: 1000
The number of prime integers between 1 and 1000, inclusive, is 168
*/