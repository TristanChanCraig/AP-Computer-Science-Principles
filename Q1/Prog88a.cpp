#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int first;
    printf("First number: ");
    scanf("%d", &first);

    int second;
    printf("Second number: ");
    scanf("%d", &second);

    printf("Original numbers are %d and %d\n\n", first, second);

    int sum = first + second;
    int diff = first - second;
    int prod = first * second;
    double avg = sum / 2;
    int ab = abs(first - second);
    int max;
    int min;
    if (first > second) {
        max = first;
        min = second;
    } else {
        max = second;
        min = first;
    }
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);
    printf("Average = %.2f\n", avg);
    printf("Absolute Value = %d\n", ab);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);
}
/*
First number: 13
Second number: 20
Original numbers are 13 and 20

Sum = 33
Difference = -7

Product = 260
Average = 16.00
Absolute Value = 7
Maximum = 20
Minimum = 13
*/