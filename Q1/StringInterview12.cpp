#include <iostream>
#include <math.h>
using namespace std;
void reverse(string& s, int i, int j) {
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main() {
    string sen;
    printf("First number: ");
    scanf("%s", &sen);

    int j = 0;
    sen.insert(sen.end(), ' ');
    for (int i = 0; i < sen.length(); i++) {
        if (sen[i] == ' ') {
            reverse(sen, j, i - 1);
            j = i + 1;
        }
    }

    cout << sen;
}