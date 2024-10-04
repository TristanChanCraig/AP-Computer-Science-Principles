#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    string nums;
    cout << "Enter in the numerals: ";
    cin >> nums;

    string n = "IVXLCDM";
    int res = 0;
    bool last = false;
    for (int lcv = nums.length()-1; lcv >= 1; lcv--) {
        int a = n.find(nums.substr(lcv,lcv+1));
        cout << a << endl;
        switch (a) {
            case 0:
                res++;
                break;
            case 1:
                res+=5;
                break;
            case 2:
                if (nums.substr(lcv-1,lcv) == "I") {
                    res += 9;
                    lcv--;
                    last = true;
                } else res += 10;
                break;
            case 3:
                res += 50;
                break;
            case 4:
                if (nums.substr(lcv-1,lcv) == "X") {
                    res += 90;
                    lcv--;
                    last = true;
                } else if (nums.substr(lcv-1,lcv) == "I") {
                    res += 99;
                    lcv--;
                    last = true;
                } else res += 100;
                break;
            case 5:
                res += 500;
                break;
            case 6:
                if (nums.substr(lcv-1,lcv) == "C") {
                    res += 9;
                    lcv--;
                    last = true;
                } else if (nums.substr(lcv-1,lcv) == "X") {
                    res += 9;
                    lcv--;
                    last = true;
                } else if (nums.substr(lcv-1,lcv) == "I") {
                    res += 9;
                    lcv--;
                    last = true;
                } else res += 1000;
                break;
        }
    }
    if (last == false) {
        int a = n.find(nums.substr(0, 1));
        switch (a) {
            case 0:
                res++;
                break;
            case 1:
                res+=5;
                break;
            case 2:
                res += 10;
                break;
            case 3:
                res += 50;
                break;
            case 4:
                res += 100;
                break;
            case 5:
                res += 500;
                break;
            case 6:
                res += 1000;
                break;
        }
    }
    printf("The sum is %d", res);
}