#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;

class Prog505b {
    private:
        vector<double> avgs;
        static int cnt;
        string f;
        string l;
        int s1;
        int s2;
        int s3;
        int s4;
        int s5;
        double avgScore;
        string gpa;

        void calc() {
            avgScore = (s1 + s2 + s3 + s4 + s5) / 5.0;
            switch ((int)avgScore / 10)) {
                case 9:
                    gpa = "A";
                    break;
                case 8:
                    gpa = "B";
                    break;
                case 7:
                    gpa = "C";
                    break;
                case 6:
                    gpa = "D";
                    break;
                default:
                    gpa = "F";
            }
        }
    public:
        Prog505b(string _f, string _l, int _s1, int _s2, int _s3, int _s4, int _s5) {
            f = _f;
            l = _l;
            s1 = _s1;
            s2 = _s2;
            s3 = _s3;
            s4 = _s4;
            s5 = _s5;
            calc();
        }

        string toString() {
            printf("%s %s\t\t%d\t%d\t%d\t%d\t%d\t\t%.2f\t%s", f, l, s1, s3, s4, s5, avgScore, grade);
        }

};

int main() {
    ifstream myfile("/workspaces/AP-Computer-Science-Principles/Q1/data/prog505b.txt", std::ios::in);
    vector<int> scores;
    vector<Prog505b> students;
    
    string f, l;
    int s1, s2, s3, s4, s5;
    while (myfile >> f) {
        myflie.ignore();
        getline(myfile, l);
        getline(myfile, s1);
        getline(myfile, s2);
        getline(myfile, s3);
        getline(myfile, s4);
        getline(myfile, s5);
        students.push_back(Prog505b(f, l, s1, s2, s3, s4, s5));
    }
    myfile.close();
}