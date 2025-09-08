// Quadratic Equation Solver
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    // Check if 'a' is valid (non-zero)
    string validity = (a != 0) ? "Valid coefficients." : "Invalid: 'a' must be non-zero.";
    cout << validity << endl;
    if (a == 0) {
        return 1;
    }

    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        // Real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        // Real and equal roots
        double root = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root: " << root << endl;
    } else {
        // Imaginary roots
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are imaginary." << endl;
        cout << "Root 1: " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}
