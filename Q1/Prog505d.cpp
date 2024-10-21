#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
using namespace std;

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

        static double mCnt;
        static double tuCnt;
        static double wCnt;
        static double thCnt;
        static double fCnt;
        static double saCnt;
        static double suCnt;

        static double mAvg;
        static double tuAvg;
        static double wAvg;
        static double thAvg;
        static double fAvg;
        static double saAvg;
        static double suAvg;

        vector<int> dayHits;
        vector<double> dayAvgs;
    public:
        Prog505d(string f, string l, double su, double bSu, double m, 
        double bM, double tu, double bTu, double w, double bW, double th, 
        double bTh, double f, double bF, double sa, double bSa) {
            first = f;
            last = l;
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
        }

        void toString() {
            printf("%s %s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", first, last, avgs.at(0), avgs.at(1), avgs.at(2), avgs.at(3), avgs.at(4), avgs.at(5), avgs.at(6)); 
        }

        void calc() {
            avgs.push_back(bD1 / hD1);
            avgs.push_back(bD2 / hD2);
            avgs.push_back(bD3 / hD3);
            avgs.push_back(bD4 / hD4);
            avgs.push_back(bD5 / hD5);
            avgs.push_back(bD6 / hD6);
            avgs.push_back(bD7 / hD7);
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

        double getAvgs { return dayAvgs; }
        int getHits { return dayHits; }

};

int main() {
    fstream myfile("/workspaces/AP-Computer-Science-Principles/Q1/data/prog505d.txt", ios_base::in) {
        string f, l;
        double a, aa, b, bb, c, cc, d, dd, e, ee, f, ff, g, gg;
        myfile >> f >> l >> a >> aa >> b >> bb >> c >> cc >> d >> dd >> e >> ee >> f >> ff >> g >> gg;
        Prog505d p = new Prog505d(f, l, a, aa, b, bb, c, cc, d, dd, e, ee, f, ff, g, gg);
        p.calc();
        p.toString();
    }

    p.calc2();

}