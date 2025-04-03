#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>

int changeToASCII(std::string msg) {
    int ascii;
    for (int i = 0; i < msg.length(); i++) ascii += (int)msg[i] * pow(10, (int)(std::to_string((int)msg[i]).length()));
    return ascii;
}

int main() {
    std::string msg;
    std::cout << "Enter plain or cipher text: ";
    getline(std::cin, msg);
    

    std::cout << "Enter key: ";
    int key;
    std::cin >> key;

    int ascii = changeToASCII(msg);
    std::cout << ascii << std::endl;
    int cipher = ascii ^ key;
    std::cout << cipher;
}