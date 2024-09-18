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
    if (first > sec) {
        if (first % 100 != 0) {
            m += first % 100;
            first -= first % 100;
        }
        h += (2400 - first) / 100;
        first = (2400 - first) % 100;
        // TODO: Fix first time somehow
        h += first / 60;
        first %= 60;
        m += first;

        h += sec / 100;
        sec /= 100;
        h += sec / 60;
        sec /= 100;
        m += sec;
    } else {
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
    }
    printf("The difference between the two times is %d hours and %d minutes.", h, m);
}
/*
Enter the first time: 900
Enter the second time: 1730
The difference between the two times is 8 hours and 30 minutes

Enter the first time: 1730
Enter the second time: 900
The difference between the two times is 16 hours and 30 minutes.
*/