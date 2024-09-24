#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int eggs;
    printf("Enter the number of eggs purchased: ");
    scanf("%d", &eggs);

    int dozen = eggs / 12;
    int rest = eggs % 12;

    double price;
    if (dozen < 4) price = 0.50;
    else if (dozen < 6) price = 0.45;
    else if (dozen < 11) price = 0.40;
    else price = 0.35;

    double total = ((double)dozen * price) + ((double)rest * (price / 12));
    printf("The bill is equal to $%.2f", total);
}
/*
Enter the number of eggs purchased: 18
The bill is equal to $0.75
*/