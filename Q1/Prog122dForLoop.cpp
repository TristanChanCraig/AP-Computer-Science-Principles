#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    printf("x\t\ty\n");
    for (int cnt = -12; cnt <= 16; cnt++) {
        int sum = pow(cnt,6) - 3*pow(cnt,5) - 93*pow(cnt,4) + 87*pow(cnt,3) + 1596*pow(cnt,2) - 1380*cnt - 2800;
        printf("%d\t\t%d\n", cnt, sum);
    }
}
/*
x               y
-12             1897280
-11             982800
-10             453600
-9              173888
-8              45360
-7              0
-6              -6400
-5              0
-4              6048
-3              7280
-2              4320
-1              0
0               -2800
1               -2592
2               0
3               2240
4               0
5               -10800
6               -32032
7               -60480
8               -84240
9               -78400
10              0
11              217728
12              671840
13              1496880
14              2872800
15              5033600
16              8276688
*/