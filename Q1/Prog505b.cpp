#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;

class Prog505b {
    private:
        vector<double> avgs;
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
            switch ((int)avgScore / 10) {
                case 9:
                    gpa = "A";
                    aCnt++;
                    break;
                case 8:
                    gpa = "B";
                    bCnt++;
                    break;
                case 7:
                    gpa = "C";
                    cCnt++;
                    break;
                case 6:
                    gpa = "D";
                    dCnt++;
                    break;
                default:
                    gpa = "F";
                    fCnt++;
            }
        }
    public:
        static double t1;
        static double t2;
        static double t3;
        static double t4;
        static double t5;
        static int aCnt;
        static int bCnt;
        static int cCnt;
        static int dCnt;
        static int fCnt;
        static int stuCnt;
        Prog505b(string _f, string _l, int _s1, int _s2, int _s3, int _s4, int _s5) {
            f = _f;
            l = _l;
            s1 = _s1;
            s2 = _s2;
            s3 = _s3;
            s4 = _s4;
            s5 = _s5;
            t1 += s1;
            t2 += s2;
            t3 += s3;
            t4 += s4;
            t5 += s5;
            stuCnt++;
            calc();
        }

        void toString() {
            cout << f << " " << l << "\t\t" << s1 << "\t" << s2 << "\t" << s3 << "\t" << s4 << "\t" << s5 << "\t\t" << avgScore << "\t" << gpa << endl;
        }

        void testToString() {
            cout << "Test 1\t" << t1 << endl << "Test 2\t" << t2 << endl << "Test 3\t" << t3 << endl << "Test 4\t" << t4 << endl << "Test 5\t" << t5 << endl;
        }

        void gradeToString() {
            cout << "A " << aCnt << endl << "B " << bCnt << endl << "C " << cCnt << endl << "D " << dCnt << endl << "F " << fCnt << endl;
        }

        void calcTest() {
            t1 /= stuCnt;
            t2 /= stuCnt;
            t3 /= stuCnt;
            t4 /= stuCnt;
            t5 /= stuCnt;
        }

};

double Prog505b::t1 = 0;
double Prog505b::t2 = 0;
double Prog505b::t3 = 0;
double Prog505b::t4 = 0;
double Prog505b::t5 = 0;
int Prog505b::aCnt = 0;
int Prog505b::bCnt = 0;
int Prog505b::cCnt = 0;
int Prog505b::dCnt = 0;
int Prog505b::fCnt = 0;
int Prog505b::stuCnt = 0;

int main() {
    ifstream myfile("/workspaces/AP-Computer-Science-Principles/Q1/data/prog505b.txt");
    vector<int> scores;
    vector<Prog505b> students;

    string f, l, s1, s2, s3, s4, s5;
    while (getline(myfile, f)) {
        getline(myfile, l);
        getline(myfile, s1);
        getline(myfile, s2);
        getline(myfile, s3);
        getline(myfile, s4);
        getline(myfile, s5);
        students.push_back(Prog505b(f, l, stoi(s1), stoi(s2), stoi(s3), stoi(s4), stoi(s5)));
    }
    myfile.close();

    for (Prog505b s : students) {
        s.toString();
    }

    students[0].calcTest();

    students[0].testToString();
    students[0].gradeToString();
    
}
/*
Sam Lilly               80      77      82      86      90              83      B
Fred Biggie             70      72      88      90      93              82.6    B
Sally Awesome           92      91      85      99      93              92      A
Test 1  80.6667
Test 2  80
Test 3  85
Test 4  91.6667
Test 5  92
A 1
B 2
C 0
D 0
F 0
*/