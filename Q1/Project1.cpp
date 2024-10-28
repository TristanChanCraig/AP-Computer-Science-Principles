#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;

// To-Do List App
bool execute(vector<string> tasks, string choice) {
    if (choice == "E") {
        return false;
    } else if (choice == "A") {
        string task;
        string temp;
        cout << "Enter the task: ";
        getline(cin, temp);
        getline(cin, task);
        tasks.push_back(task);
        cout << endl;
    } else if (choice == "R") {
        for (int i = 0; i < tasks.size(); i++) {
            cout << i << ": " << tasks[i] << endl;
        }
        cout << endl;
        int index;
        printf("Enter the task number you want to remove: ");            
        cin >> index;
        tasks.erase(tasks.begin() + index);
        cout << endl;
    } else if (choice == "C") {
        for (int i = 0; i < tasks.size(); i++) {
            cout << i << ": " << tasks[i] << endl;
        }
        int index;
        printf("Enter the task number you want to complete: ");
        cin >> index;
        tasks[index] = tasks[index] + " (Completed)";
        cout << endl;
    } else cout << "Invalid Choice!" << endl << endl;
    return true;
}

int main() {
    bool run = true;
    vector<string> tasks;
    while (run) {
        cout << "Task List: " << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << tasks[i] << endl;
        }
        string choice;
        printf("E for exit, A for add, R for remove, or C for complete a task: ");
        cin >> choice;

        run = execute(vector<string> tasks, choice);
    }
    cout << "Successfully Exited";
}
/*
Task List: 
E for exit, A for add, R for remove, or C for complete a task: A
Enter the task: Harass Marlon

Task List: 
Harass Marlon
E for exit, A for add, R for remove, or C for complete a task: A
Enter the task: Stop Winter

Task List: 
Harass Marlon
Stop Winter
E for exit, A for add, R for remove, or C for complete a task: D
Invalid Choice!

Task List: 
Harass Marlon
Stop Winter
E for exit, A for add, R for remove, or C for complete a task: C
0: Harass Marlon
1: Stop Winter
Enter the task number you want to complete: 0

Task List: 
Harass Marlon (Completed)
Stop Winter
E for exit, A for add, R for remove, or C for complete a task: A
Enter the task: Talk to Jonah

Task List: 
Harass Marlon (Completed)
Stop Winter
Talk to Jonah
E for exit, A for add, R for remove, or C for complete a task: R
0: Harass Marlon (Completed)
1: Stop Winter
2: Talk to Jonah

Enter the task number you want to remove: 2

Task List: 
Harass Marlon (Completed)
Stop Winter
E for exit, A for add, R for remove, or C for complete a task: E
Successfully Exited
*/