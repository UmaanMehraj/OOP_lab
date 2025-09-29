    // Triangle Validator and Type Checker
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check for triangle validity
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid triangle." << endl;
        // Type check
        if (a == b && b == c)
            cout << "Equilateral triangle." << endl;
        else if (a == b || b == c || a == c)
            cout << "Isosceles triangle." << endl;
        else
            cout << "Scalene triangle." << endl;
        // Right-angled check
        double a2 = a * a, b2 = b * b, c2 = c * c;
        if (fabs(a2 + b2 - c2) < 1e-6 || fabs(a2 + c2 - b2) < 1e-6 || fabs(b2 + c2 - a2) < 1e-6)
            cout << "Right-angled triangle." << endl;
    } else {
        cout << "Not a valid triangle." << endl;
    }
    return 0;
}
