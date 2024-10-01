#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    printf("Number Cube\tSquare 4th Root\t\tSquare Root\n");
    for (int cnt = 1; cnt <= 20; cnt++) {
        printf("%d\t\t%.4f\t\t\t%.4f\n", cnt, pow(cnt, 0.25), pow(cnt, 0.5));
    }
}
/*
Number Cube     Square 4th Root         Square Root
1               1.0000                  1.0000
2               1.1892                  1.4142
3               1.3161                  1.7321
4               1.4142                  2.0000
5               1.4953                  2.2361
6               1.5651                  2.4495
7               1.6266                  2.6458
8               1.6818                  2.8284
9               1.7321                  3.0000
10              1.7783                  3.1623
11              1.8212                  3.3166
12              1.8612                  3.4641
13              1.8988                  3.6056
14              1.9343                  3.7417
15              1.9680                  3.8730
16              2.0000                  4.0000
17              2.0305                  4.1231
18              2.0598                  4.2426
19              2.0878                  4.3589
20              2.1147                  4.4721
*/