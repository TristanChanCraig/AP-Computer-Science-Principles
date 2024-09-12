#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Enter length: ";
    cin >> len;

    int wid;
    cout << "Enter width: ";
    cin >> wid;

    int area = len * wid;
    int perim = 2 * len + 2 * wid;

    cout << "The area is: " << area << endl;
    cout << "The perimeter is: " << perim;
}
/*
Enter length: 143
Enter width: 82
The area is: 11726
The perimeter is: 450
*/