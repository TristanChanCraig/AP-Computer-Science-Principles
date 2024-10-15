#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    cout << "Print the Array from the beginning to the end" << endl;
    int arr[19] = {};
    for (int i = 0; i < sizeof(arr); i++) { arr[i] = 20 + (rand() % 90); }
    cout << endl << endl;

    cout << "Print the Array from the beginning to the end using a for-each loop" << endl;
    for (int i = 0; i < sizeof(arr); i++) { cout << arr[i] << " "; }
    cout << endl << endl;

    for (auto &&num : arr) { cout << num << " "; }
    cout << endl << endl;

    cout << "The number in the middle array is: " << arr[9] << endl << endl;

    double avg = (arr[0] + arr[9] + arr[18]) / 3;
    cout << "The average between the first, middle, and last number is: " << avg << endl << endl;

    int min = arr[0];
    int minIndex = 0;
    int max = arr[0];
    int maxIndex = 0;
    for (int lcv = 0; lcv < sizeof(arr); lcv++) {
        if (arr[lcv] < min) {
            min = arr[lcv];
            minIndex = lcv;
        }
        if (arr[lcv] > max) {
            max = arr[lcv];
            maxIndex = lcv;
        }
    }
    cout << "The smallest number in the array is: " << min << endl;
    cout << "The largest number in the array is: " << max << endl << endl;

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
    for (auto &&num : arr) { cout << num << " "; }
    cout << endl << endl;

    arr[9] = 1 + (rand() % 10);
    for (auto &&num : arr) { cout << num << " "; }
    cout << endl << endl;

    for (int lcv = 0; lcv < sizeof(arr); lcv++) {
        arr[lcv] += 10;
    }
    for (auto &&num : arr) { cout << num << " "; }
    cout << endl << endl;

    temp = arr[2];
    arr[2] = 5;
    cout << temp << endl;

    for (auto &&num : arr) { 
        if (num >= 50 && num < 60) cout << num << " ";
    }
    cout << endl << endl;

    for (auto &&num : arr) { 
        if (num % 4 == 0) cout << num << " ";
    }
    cout << endl << endl;

    bool sixty = false;
    for (auto &&num : arr) { 
        if (num == 60) sixty = true;
    }
    cout << "Is there a 60 in the list? " << sixty << endl << endl;

    bool reverse = true;
    for (int lcv = 0; lcv < sizeof(arr); lcv++) {
        if (arr[lcv] != arr[sizeof(arr) - lcv - 1]) reverse = false;
    }
    cout << "Is the list a the same from front to back and back to front? " << reverse << endl << endl;

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
    for (int lcv = 0; lcv < sizeof(arr); lcv++) {
        newArr[lcv] = arr[sizeof(arr) - lcv - 1];
    }
    cout << "Reverse Array: ";
    for (auto &&num : newArr) cout << num << " ";
    cout << endl << endl;

    for (int lcv = 1; lcv < sizeof(arr); lcv++) {
        if (lcv == sizeof(arr) - 1) arr[0] = arr[lcv];
        arr[lcv-1] = arr[lcv];
    }
    cout << "Shift right: ";
    for (auto &&num : newArr) cout << num << " ";
    cout << endl << endl;

    int sumDigits = 0;
    for (auto &&num : newArr) {
        while (num > 0) {
            int digit = num % 10;
            sumDigits += digit;
            num /= 10;
        }
    }
    cout << "The sum of every digit in the array is: " << sumDigits << endl << endl;
}