#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;
vector<string> list;
vector<double> costs;
// To-Do List App
bool execute(string choice) {
    if (choice == "E") {
        return false;
    } else if (choice == "B") {
        for (int i = 0; i < list.size(); i++) {
            cout << i << ": " << list[i] << endl;
        }
        int index;
        printf("Enter the item number you want to mark as bought: ");
        cin >> index;
        list[index] = list[index] + " (Bought)";
        cout << endl;
    } else if (choice == "A") {
        string temp;
        string item;
        string cost;
        cout << "Enter the item: ";
        getline(cin, temp);
        getline(cin, item);
        list.push_back(item);
        cout << "Enter the cost: ";
        cin >> cost;
        costs.push_back(stod(cost));
        cout << endl;
    } else if (choice == "R") {
        for (int i = 0; i < list.size(); i++) {
            cout << i << ": " << list[i] << " $" << costs[i] << endl;
        }
        cout << endl;
        int index;
        printf("Enter the item number you want to remove: ");            
        cin >> index;
        list.erase(list.begin() + index);
        costs.erase(costs.begin() + index);
        cout << endl;
    } else if (choice == "C") {
        double total;
        for (int i = 0; i < costs.size(); i++) if (list[i].find("(Bought)") == -1) total += costs[i];
        cout << "The total cost of the grocery list without taxes is: $" << total << endl << endl;
    } else cout << "Invalid Choice!" << endl << endl;
    return true;
}

int main() {
    bool run = true;
    while (run) {
        cout << "Grocery List: " << endl;
        for (int i = 0; i < list.size(); i++) {
            cout << i << ": " << list[i] << " " << costs[i] << endl;
        }
        string choice;
        printf("E for exit, A for add, R for remove, B for bought, or C to calculate the total cost: ");
        cin >> choice;

        run = execute(choice);
    }
    cout << "Successfully Exited";
}
/*
Grocery List: 
E for exit, A for add, R for remove, B for bought, or C to calculate the total cost: A
Enter the item: Banana
Enter the cost: 1.99

Grocery List: 
0: Banana 1.99
E for exit, A for add, R for remove, B for bought, or C to calculate the total cost: A
Enter the item: Apple
Enter the cost: 0.99

Grocery List: 
0: Banana 1.99
1: Apple 0.99
E for exit, A for add, R for remove, B for bought, or C to calculate the total cost: A
Enter the item: Bread
Enter the cost: 4.99

Grocery List: 
0: Banana 1.99
1: Apple 0.99
2: Bread 4.99
E for exit, A for add, R for remove, B for bought, or C to calculate the total cost: B
0: Banana
1: Apple
2: Bread
Enter the item number you want to mark as bought: 2

Grocery List: 
0: Banana 1.99
1: Apple 0.99
2: Bread (Bought) 4.99
E for exit, A for add, R for remove, B for bought, or C to calculate the total cost: A
Enter the item: Chicken
Enter the cost: 12.99

Grocery List: 
0: Banana 1.99
1: Apple 0.99
2: Bread (Bought) 4.99
3: Chicken 12.99
E for exit, A for add, R for remove, B for bought, or C to calculate the total cost: R
0: Banana $1.99
1: Apple $0.99
2: Bread (Bought) $4.99
3: Chicken $12.99

Enter the item number you want to remove: 0

Grocery List: 
0: Apple 0.99
1: Bread (Bought) 4.99
2: Chicken 12.99
E for exit, A for add, R for remove, B for bought, or C to calculate the total cost: C
The total cost of the grocery list without taxes is: $13.98

Grocery List: 
0: Apple 0.99
1: Bread (Bought) 4.99
2: Chicken 12.99
E for exit, A for add, R for remove, B for bought, or C to calculate the total cost: E
Successfully Exited
*/