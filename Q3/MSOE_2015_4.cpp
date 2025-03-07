#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<double> nums;

    for (size_t i = 0; i < 10; i++)
    {
        cout << "Number " << i+1 << ": ";
        double num;
        cin >> num;
        nums.push_back(num);
    }

    vector<double> largest;
    for (size_t j = 0; j < 3; j++) 
    {
        double currLarge = nums[0];
        int currIndex = 0;
        for (size_t k = 1; k < 10; k++)
        {
            double curr = nums[k];
            if (abs(curr) > abs(currLarge)) {
                currLarge = curr;
                currIndex = k;
            }
        }
        nums.erase(nums.begin() + currIndex);
        largest.push_back(currLarge);
    }

    cout << "The three largest numbers are: " << largest[0] << " " << largest[1] << " " << largest[2];
}
/*
Number 1: 1
Number 2: 2
Number 3: 3
Number 4: 4
Number 5: 5
Number 6: 6
Number 7: 7
Number 8: 8
Number 9: 9
Number 10: 0
The three largest numbers are: 9 8 7

Number 1: 21
Number 2: 3
Number 3: -213
Number 4: -151
Number 5: 34
Number 6: 2626
Number 7: 1
Number 8: 2
Number 9: -134
Number 10: 23
The three largest numbers are: 2626 -213 -151
*/