#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    cin >> str2;

    int cnt = 0;
    bool b = false;
    for (int lcv = 0; lcv < str1.length(); lcv++) {
        if (str1.substr(lcv, lcv + str2.length()) == str2) {
            b = true;
            break;
        }
    }
    if (b == true) cout << "The second string is contained within the first string.";
    else cout << "The second string is not contained within the first string.";
}
/*
Enter the first string: winter is not doing his work
Enter the second string: winter
The second string is contained within the first string.

Enter the first string: aaaa
Enter the second string: b
The second string is not contained within the first string.
*/