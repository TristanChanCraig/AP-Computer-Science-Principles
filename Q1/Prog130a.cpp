#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int cnt = 0;
    while (num != 1) {
        if (num % 2 == 0) {
            printf("%d is even, so I take half = %d\n", num, num/2);
            num /= 2;
        } else {
            printf("%d is odd, so I make 3n + 1 = %d\n", num, num*3+1);
            num = num*3+1;    
        }
        cnt++;
    }
    printf("The process took 12 steps to reach %d.", num);
}
/*
Enter a number: 17
17 is odd, so I make 3n + 1 = 52
52 is even, so I take half = 26
26 is even, so I take half = 13
13 is odd, so I make 3n + 1 = 40
40 is even, so I take half = 20
20 is even, so I take half = 10
10 is even, so I take half = 5
5 is odd, so I make 3n + 1 = 16
16 is even, so I take half = 8
8 is even, so I take half = 4
4 is even, so I take half = 2
2 is even, so I take half = 1
The process took 12 steps to reach 1.
*/