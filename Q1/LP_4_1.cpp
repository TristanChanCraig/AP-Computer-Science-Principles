#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    int copies;
    printf("Enter the number of copies to be printed: ");
    scanf("%d", &copies);

    double price;
    if (copies < 100) price = 0.30;
    else if (copies < 500) price = 0.28;
    else if (copies < 750) price = 0.27;
    else if (copies <= 1000) price = 0.26;
    else price = 0.25;

    printf("Price per copy is: $%.2f\n", price);
    printf("Total cost is: $%.2f", copies * price);
}
/*
Enter the number of copies to be printed: 1001
Price per copy is: $0.25
Total cost is: $250.25
*/