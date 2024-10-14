#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

bool isPrime(num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    
}