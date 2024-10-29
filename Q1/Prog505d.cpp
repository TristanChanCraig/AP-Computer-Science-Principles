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
        
        void calc2() {
            mAvg /= mCnt;
            tuAvg /= tuCnt;
            wAvg /= wCnt;
            thAvg /= thCnt;
            fAvg /= fCnt;
            saAvg /= saCnt;
            suAvg /= suCnt;
        }

};

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

    

}