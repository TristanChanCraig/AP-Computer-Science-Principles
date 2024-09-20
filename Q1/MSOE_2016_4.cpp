#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int cnt = num;
    for (int i = 1; i <= num; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                cnt--;
                i++;
            }
        }
    }

    printf("The number of prime integers between 1 and %d, inclusive, is %d", num, cnt);
}
/*
Enter the number: 10
The number of integers between 1 and 10, inclusive, is 4
*/