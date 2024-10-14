#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int arr[] = new int[20];
    for (int i = 0; i < arr.length(); i++) { arr[i] = 20 + (rand() % 90); }

    for (int i = 0; i < arr.length(); i++) { cout << arr[i] << " " }
    cout << endl;

    for (auto &&num : arr)
    {
        cout <<
    }
    
}