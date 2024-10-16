#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int arr[19] = {};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) { arr[i] = rand() % (90 - 20 + 1) + 20; }

    cout << "Print the Array from the beginning to the end" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) { cout << arr[i] << " "; }
    cout << endl << endl;

    cout << "Print the Array from the beginning to the end using a for-each loop" << endl;
    for (auto &&num : arr) { cout << num << " "; }
    cout << endl << endl;

    cout << "The number in the middle array is: " << arr[9] << endl << endl;

    double avg = (arr[0] + arr[9] + arr[18]) / 3;
    cout << "The average between the first, middle, and last number is: " << avg << endl << endl;

    int min = arr[0];
    int minIndex = 0;
    int max = arr[0];
    int maxIndex = 0;
    for (int lcv = 0; lcv < sizeof(arr) / sizeof(arr[0]); lcv++) {
        if (arr[lcv] < min) {
            min = arr[lcv];
            minIndex = lcv;
        }
        if (arr[lcv] > max) {
            max = arr[lcv];
            maxIndex = lcv;
        }
    }
    cout << "The smallest number in the array is: " << min << endl << endl;
    cout << "The largest number in the array is: " << max << endl << endl;

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
    for (auto &&num : arr) { cout << num << " "; }
    cout << endl << endl;

    cout << "Insert random number into the middle: ";
    int temp4 = arr[sizeof(arr) / sizeof(arr[0]) / 2];
    arr[sizeof(arr) / sizeof(arr[0]) / 2] = 1 + (rand() % 10);
    for (int lcv = sizeof(arr) / sizeof(arr[0]) + 1; lcv < sizeof(arr) / sizeof(arr[0]) / 2 + 1; lcv--) {
        arr[lcv] = arr[lcv - 1];
    }
    arr[sizeof(arr) / sizeof(arr[0]) / 2 + 1] = temp4;
    for (auto &&num : arr) { cout << num << " "; }
    cout << endl << endl;

    cout << "Add 10: ";
    for (int lcv = 0; lcv < sizeof(arr) / sizeof(arr[0]); lcv++) {
        arr[lcv] += 10;
    }
    for (auto &&num : arr) { cout << num << " "; }
    cout << endl << endl;

    cout << "Replace 3rd element with 5 and return ousted number: ";
    temp = arr[2];
    arr[2] = 5;
    cout << temp << endl << endl;

    cout << "Number in the 50s: ";
    for (auto &&num : arr) { 
        if (num >= 50 && num < 60) cout << num << " ";
    }
    cout << endl << endl;

    cout << "Multiples of 4: ";
    for (auto &&num : arr) { 
        if (num % 4 == 0) cout << num << " ";
    }
    cout << endl << endl;

    bool sixty = false;
    for (auto &&num : arr) { 
        if (num == 60) sixty = true;
    }
    cout << "Is there a 60 in the list? " << boolalpha << sixty << endl << endl;

    bool reverse = true;
    for (int lcv = 0; lcv < sizeof(arr) / sizeof(arr[0]); lcv++) {
        if (arr[lcv] != arr[sizeof(arr) / sizeof(arr[0]) - lcv - 1]) reverse = false;
    }
    cout << "Is the list a the same from front to back and back to front? " << boolalpha << reverse << endl << endl;

    double aevg = 0;
    int cnt = 0;
    for (auto &&num : arr) aevg += num;
    aevg /= 19;
    for (auto &&num : arr) {
        if (num > aevg) cnt++;
    }
    cout << "There are " << cnt << " numbers greater than the average of " << aevg << "." << endl << endl;

    int evenCnt = 0;
    for (auto &&num : arr) {
        if (num % 2 == 0) evenCnt++;
    }
    cout << "There are " << cnt << " even numbers in the list." << endl << endl;

    int newArr[19] = {};
    for (int lcv = 0; lcv < sizeof(arr) / sizeof(arr[0]); lcv++) {
        newArr[lcv] = arr[sizeof(arr) / sizeof(arr[0]) - lcv - 1];
    }
    cout << "Reverse Array: ";
    for (auto &&num : newArr) cout << num << " ";
    cout << endl << endl;

    cout << "Original Array: " << "\t";
    for (auto &&num : arr) cout << num << " ";
    cout << endl << endl;
    int temp3 = arr[sizeof(arr) / sizeof(arr[0]) - 1];
    for (int lcv = sizeof(arr) / sizeof(arr[0]) - 2; lcv >= 0; lcv--) {
        arr[lcv+1] = arr[lcv];
    }
    arr[0] = temp3;
    cout << "Shift right: " << "\t\t";
    for (auto &&num : arr) cout << num << " ";
    cout << endl << endl;

    int sumDigits = 0;
    for (auto &&num : arr) {
        while (num > 0) {
            int digit = num % 10;
            sumDigits += digit;
            num /= 10;
        }
    }
    cout << "The sum of every digit in the array is: " << sumDigits << endl << endl;
}
/*
Print the Array from the beginning to the end
57 22 74 70 61 78 76 39 87 89 83 41 79 58 87 73 86 35 26 

Print the Array from the beginning to the end using a for-each loop
57 22 74 70 61 78 76 39 87 89 83 41 79 58 87 73 86 35 26 

The number in the middle array is: 89

The average between the first, middle, and last number is: 57

The smallest number in the array is: 22

The largest number in the array is: 89

57 89 74 70 61 78 76 39 87 22 83 41 79 58 87 73 86 35 26 

Insert random number into the middle: 57 89 74 70 61 78 76 39 87 7 22 41 79 58 87 73 86 35 26 

Add 10: 67 99 84 80 71 88 86 49 97 17 32 51 89 68 97 83 96 45 36 

Replace 3rd element with 5 and return ousted number: 84

Number in the 50s: 51 

Multiples of 4: 80 88 32 68 96 36 

Is there a 60 in the list? false

Is the list a the same from front to back and back to front? false

There are 12 numbers greater than the average of 66.1053.

There are 12 even numbers in the list.

Reverse Array: 36 45 96 83 97 68 89 51 32 17 97 49 86 88 71 80 5 99 67 

Original Array:         67 99 5 80 71 88 86 49 97 17 32 51 89 68 97 83 96 45 36 

Shift right:            36 67 99 5 80 71 88 86 49 97 17 32 51 89 68 97 83 96 45 

The sum of every digit in the array is: 221
*/