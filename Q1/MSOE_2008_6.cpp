#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    string str, tgt;
    cout << "Enter the source string: ";
    cin >> str;
    cout << "Enter the target string: ";
    cin >> tgt;

    int cnt = 0;
    
    while (str.find(tgt) != -1) {
        int newPos = str.find(tgt) + tgt.length();
        int newLen = str.length() - newPos;
        cnt++;
        str = str.substr(newPos, newLen);
    } 

    printf("The target string appears in the source string %d times.", cnt);
}
/*
Enter the source string: CGATTACGCGACGAT
Enter the target string: CGA
The target string appears in the source string 3 times.
*/