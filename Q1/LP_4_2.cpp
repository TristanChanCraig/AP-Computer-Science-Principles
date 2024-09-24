#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int weight;
    printf("Enter package weight in kilograms: ");
    scanf("%d", &weight);

    int length;
    printf("Enter package length in centimeters: ");
    scanf("%d", &length);

    int width;
    printf("Enter package width in centimeters: ");
    scanf("%d", &width);

    int height;
    printf("Enter package height in centimeters: ");
    scanf("%d", &height);

    if (weight > 27 && length * width * height > 100000) printf("Too heavy and too large.");
    else if (weight > 27) printf("Too heavy.");
    else if (length * width * height > 100000) printf("Too large.");
}
/*
Enter package weight in kilograms: 32
Enter package length in centimeters: 10
Enter package width in centimeters: 25
Enter package height in centimeters: 38
Too heavy.
*/