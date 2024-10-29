#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;
vector<string> tasks;
// To-Do List App
bool execute(string choice) {
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
    while (run) {
        cout << "Task List: " << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << tasks[i] << endl;
        }
        string choice;
        printf("E for exit, A for add, R for remove, or C for complete a task: ");
        cin >> choice;

        run = execute(choice);
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
/*
Task List: 
E for exit, A for add, R for remove, or C for complete a task: A
Enter the task: die

Task List: 
die
E for exit, A for add, R for remove, or C for complete a task: A
Enter the task: hi hi

Task List: 
die
hi hi
E for exit, A for add, R for remove, or C for complete a task: A
Enter the task: you gon kill me

Task List: 
die
hi hi
you gon kill me
E for exit, A for add, R for remove, or C for complete a task: C
0: die
1: hi hi
2: you gon kill me
Enter the task number you want to complete: 0

Task List: 
die (Completed)
hi hi
you gon kill me
E for exit, A for add, R for remove, or C for complete a task: E
Successfully Exited@TristanChanCraig ➜ /workspaces/AP-Computer-Science-Principles/Q1 (main) $ cd "/workspaces/AP-Computer-Science-Principles/Q1/" && g++ Project1.cpp -o Project1 && "/workspaces/AP-Computer-Science-Principles/Q1/"Project1
Task List: 
E for exit, A for add, R for remove, or C for complete a task: A
Enter the task: Harass Marlon 24/7

Task List: 
Harass Marlon 24/7
E for exit, A for add, R for remove, or C for complete a task: A
Enter the task: Stop Winter

Task List: 
Harass Marlon 24/7
Stop Winter
E for exit, A for add, R for remove, or C for complete a task: C
0: Harass Marlon 24/7
1: Stop Winter
Enter the task number you want to complete: 0

Task List: 
Harass Marlon 24/7 (Completed)
Stop Winter
E for exit, A for add, R for remove, or C for complete a task: A
Enter the task: Say hi to Braeden Chubak

Task List: 
Harass Marlon 24/7 (Completed)
Stop Winter
Say hi to Braeden Chubak
E for exit, A for add, R for remove, or C for complete a task: R
0: Harass Marlon 24/7 (Completed)
1: Stop Winter
2: Say hi to Braeden Chubak
Enter the task number you want to remove: 2

Task List: 
Harass Marlon 24/7 (Completed)
Stop Winter
E for exit, A for add, R for remove, or C for complete a task: E
Successfully Exited
*/