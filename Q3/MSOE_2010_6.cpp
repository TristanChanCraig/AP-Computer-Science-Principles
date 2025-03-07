#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    vector<double> xcoords;
    vector<double> ycoords;
    cout << "Number of vertices: ";
    int numVert = 0;
    cin >> numVert;

    for (size_t i = 0; i < numVert; i++)
    {
        cout << "X" << i+1 << ": ";
        double x;
        cin >> x;
        cout << "Y" << i+1 << ": ";
        double y;
        cin >> y;
        cout << endl;
        xcoords.push_back(x);
        ycoords.push_back(y);
    }

    double area;
    for (size_t i = 0; i < numVert-1; i++)
    {
        area += (xcoords[i] * ycoords[i+1]) - (xcoords[i+1] * ycoords[i]);
    }
    area += (xcoords[numVert-1] * ycoords[0]) - (xcoords[0] * ycoords[numVert]);
    area *= -0.5;
    cout << "The area of the polygon is: " << area;
}
/*
Number of vertices: 4
X1: 0
Y1: 0

X2: 0
Y2: 4

X3: 4
Y3: 4

X4: 4
Y4: 0

The area of the polygon is: 16



Number of vertices: 6
X1: 0
Y1: 0

X2: -2
Y2: 3

X3: -2
Y3: 5

X4: 0
Y4: 7

X5: 2
Y5: 7

X6: 4
Y6: 5

The area of the polygon is: 25
*/