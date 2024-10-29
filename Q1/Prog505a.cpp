#include <iostream>
#include <math.h>
#include <string.h>
#include <fstream>
#include <vector>
using namespace std;

class Prog505d {
    private:
        string first;
        string last;
        int books;
        int points;
        void calc() {
            if (books <= 3) points = books * 10;
            else if (books <= 6) points = 30 + ((books - 3) * 15);
            else points = 75 + ((books - 6) * 20);
        }
    public:
        Prog505d(string f, string l, int b) {
            first = f;
            last = l;
            books = b;
            calc();
        }

        void toString() {
            cout << first << " " << last << "\t\t" << books << "\t\t" << points << endl;
        }
};

int main() {
    ifstream myfile("/workspaces/AP-Computer-Science-Principles/Q1/data/prog505a.txt");
    vector<Prog505d> list;

    string f, l, b;
    while (myfile >> f) {
        myfile >> l;
        myfile >> b;
        list.push_back(Prog505d(f, l, stoi(b)));
    }
    myfile.close();

    cout << "Reading Contest" << endl;
    cout << "Name\t\t\tBooks\t\tPoints" << endl;
    for (int i = 0; i < list.size(); i++) list[i].toString();
}
/*
Reading Contest
Name                    Books           Points
Sam Summer              4               45
Linda Lazy              2               20
Paul Prodder            5               60
K.C. Master             8               115
Richie Reader           6               75
*/