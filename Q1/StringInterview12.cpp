#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void reversePrint(string& s) {
    char arr[100]; 
    int i = s.length();
    while (arr[i] != '\0') {
        if (arr[i] != ' ') {
            // Append the char to the temp string.
            s += arr[i]; 
        } else {
            cout << s << endl;
            s.clear();
        }
        i--;

    }
}

void reversePrints(string& s) {
    int lastSpace = s.length();
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == ' ' || i == 0) {
            for (int j = i; j <= lastSpace; j++) {
                cout << s[j];
            }
            lastSpace = i;
        }
    }
}

int main() {
    string sen;
    printf("Enter sentence: ");
    getline(cin, sen);
    reversePrints(sen);
}
/*
Enter sentence: C plus plus is best programming language
 language programming  best  is  plus  plus C
*/