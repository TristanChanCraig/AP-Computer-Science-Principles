#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;


double mCnt = 0;
double tuCnt = 0;
double wCnt = 0;
double thCnt = 0;
double fCnt = 0;
double saCnt = 0;
 double suCnt = 0;

double mAvg = 0;
double tuAvg = 0;
double wAvg = 0;
double thAvg = 0;
double fAvg = 0;
double saAvg = 0;
double suAvg = 0;
class Prog505d {
    private:
        string first;
        string last;
        double hD1;
        double bD1;
        double hD2;
        double bD2;
        double hD3;
        double bD3;
        double hD4;
        double bD4;
        double hD5;
        double bD5;
        double hD6;
        double bD6;
        double hD7;
        double bD7;
        vector<double> avgs;

        void calc() {
            avgs.push_back((int)((hD1 / bD1) * 1000) / 1000.000f);
            avgs.push_back((int)((hD2 / bD2) * 1000) / 1000.000f);
            avgs.push_back((int)((hD3 / bD3) * 1000) / 1000.000f);
            avgs.push_back((int)((hD4 / bD4) * 1000) / 1000.000f);
            avgs.push_back((int)((hD5 / bD5) * 1000) / 1000.000f);
            avgs.push_back((int)((hD6 / bD6) * 1000) / 1000.000f);
            avgs.push_back((int)((hD7 / bD7) * 1000) / 1000.000f);
        }
    public:
        Prog505d(string fi, string la, double su, double bSu, double m, 
        double bM, double tu, double bTu, double w, double bW, double th, 
        double bTh, double f, double bF, double sa, double bSa) {
            first = fi;
            last = la;
            hD1 = su;
            hD2 = m;
            hD3 = tu;
            hD4 = w;
            hD5 = th;
            hD6 = f;
            hD7 = sa;
            bD1 = bSu;
            bD2 = bM;
            bD3 = bTu;
            bD4 = bW;
            bD5 = bTh;
            bD6 = bF;
            bD7 = bSa;

            mCnt += bM;
            tuCnt += bTu;
            wCnt += bW;
            thCnt += bTh;
            fCnt += bF;
            saCnt += bSa;
            suCnt += bSu;

            mAvg += m;
            tuAvg += tu;
            wAvg += w;
            thAvg += th;
            fAvg += f;
            saAvg += sa;
            suAvg += su;
            calc();
        }

        void toString() {
            cout << first << " " << last << "\t" << avgs[0] << "\t" << avgs[1] << "\t"<< avgs[2] << "\t"<< avgs[3] << "\t"<< avgs[4] << "\t"<< avgs[5] << "\t"<< avgs[6] << endl;
        }

};

void calc2() {
    mAvg /= mCnt;
    tuAvg /= tuCnt;
    wAvg /= wCnt;
    thAvg /= thCnt;
    fAvg /= fCnt;
    saAvg /= saCnt;
    suAvg /= suCnt;
}

int main() {
    vector<Prog505d> vec;
    ifstream myfile("/workspaces/AP-Computer-Science-Principles/Q1/data/prog505d.txt");
    
    string fi, la;
    double a, aa, b, bb, c, cc, d, dd, e, ee, f, ff, g, gg;
    while (myfile >> fi) {
        myfile >> la >> a >> aa >> b >> bb >> c >> cc >> d >> dd >> e >> ee >> f >> ff >> g >> gg;
        Prog505d p = Prog505d(fi, la, a, aa, b, bb, c, cc, d, dd, e, ee, f, ff, g, gg);
        p.toString();
    }

    calc2();

    cout << "Monday\t\t" << mCnt << "\t" << mAvg << endl;
    cout << "Tuesday\t\t" << tuCnt << "\t" << tuAvg << endl;
    cout << "Wednesday\t" << wCnt << "\t" << wAvg << endl;
    cout << "Thursday\t" << thCnt << "\t" << thAvg << endl;
    cout << "Friday\t\t" << fCnt << "\t" << fAvg << endl;
    cout << "Saturday\t" << saCnt << "\t" << saAvg << endl;
    cout << "Sunday\t\t" << suCnt << "\t" << suAvg << endl;

}
/*
Fred Sluggo     0.5     0.25    0.333   0.25    0       0       1
Lydia Crusher   0.666   0.666   0.8     0.4     0.25    1       0.25
Braeden Boomer  1       0.5     0.625   0.5     0.2     0.333   0
Noah Niller     0.333   0.571   0.333   0.75    0.5     0.333   0.285
Ruben Romper    0       0.333   0.5     0.4     0.285   0.375   0
Lisa Longball   1       0.5     0.714   0.25    0.75    0.5     0.2
Claire Corner   0.25    0.666   0.375   0.444   0.8     0.333   0.2
Jared Just      1       0.5     0.4     0.285   0.125   1       0.333
Monday          37      0.513514
Tuesday         46      0.521739
Wednesday       48      0.395833
Thursday        45      0.355556
Friday          38      0.394737
Saturday        37      0.324324
Sunday          17      0.470588
*/