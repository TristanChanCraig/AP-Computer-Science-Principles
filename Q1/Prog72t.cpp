#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int first;
    printf("Enter the first time: ");
    scanf("%d", &first);

    int sec;
    printf("Enter the second time: ");
    scanf("%d", &sec);

    int time = abs(first - sec);

    int m = 0;
    int h = 0;

    while (time > 99) {
         time -= 100;
         h += 1;
    }
    while (time > 59) {
        time -= 60;
        h += 1;
    }
    while (time > 0) {
        time -= 1;
        m += 1;
    }
    
    printf("The difference between the two times is %d hours and %d minutes.", h, m);
}
/*
Enter the first time: 900
Enter the second time: 1730
The difference between the two times is 8 hours and 30 minutes
*/