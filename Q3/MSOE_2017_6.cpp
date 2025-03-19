#include <iostream>
#include <stdio.h>
#include <vector>

int main() {
    std::cout << "Enter the Number: ";
    int num;
    std::cin >> num;
    std::vector<int> primes;
    int cnt = num;
    int n = 2;
    while (cnt != 1 || n <= num) {
        while (cnt % n == 0) {
            cnt /= n;
            primes.push_back(n);
        }
        n++;
    }
    int psi = num;
    for (int i = 0; i < primes.size(); i++) psi *= (1 + (1.0/primes[i]));
    std::cout << "The psi value is: " << psi;
}
/*
Enter the Number: 6
The psi value is: 12

Enter the Number: 30
The psi value is: 72

Enter the Number: 1
The psi value is: 1

Enter the Number: 2
The psi value is: 3
*/