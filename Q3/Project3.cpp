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
    } else if (choice == "A") {
        string item;
        string temp;
        cout << "Enter the item: ";
        getline(cin, temp);
        getline(cin, item);
        list.push_back(item);
        string cost;
        cout << "Enter the cost: ";
        getline(cin, cost);
        costs.push_back(atof(cost.c_str()));
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
    } else if (choice == "C") {
        for (int i = 0; i < list.size(); i++) {
            cout << i << ": " << list[i] << " $" << costs[i] << endl;
        }
        int index;
        printf("Enter the task number you want to complete: ");
        cin >> index;
        list[index] = list[index] + " (Completed)";
        cout << endl;
    } else cout << "Invalid Choice!" << endl << endl;
    return true;
}

int main() {
    bool run = true;
    while (run) {
        cout << "Grocery List: " << endl;
        for (int i = 0; i < list.size(); i++) {
            cout << i << ": " << list[i] << " " << costs[1] << endl;
        }
        string choice;
        printf("E for exit, A for add, R for remove, or C to calculate the total cost: ");
        cin >> choice;

        run = execute(choice);
    }
    cout << "Successfully Exited";
}