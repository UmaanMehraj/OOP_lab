#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(15);

    // Demonstrate floating-point error
    float a_f = 1.0f, b_f = 3.0f, c_f = 7.0f;
    double a_d = 1.0, b_d = 3.0, c_d = 7.0;

    float result1_f = (a_f * b_f) / c_f;
    float result2_f = (a_f / c_f) * b_f;

    double result1_d = (a_d * b_d) / c_d;
    double result2_d = (a_d / c_d) * b_d;

    cout << "------ FLOAT RESULTS ------" << endl;
    cout << "(a*b)/c = " << result1_f << endl;
    cout << "(a/c)*b = " << result2_f << endl;
    cout << "Difference = " << result1_f - result2_f << endl;

    cout << "\n------ DOUBLE RESULTS ------" << endl;
    cout << "(a*b)/c = " << result1_d << endl;
    cout << "(a/c)*b = " << result2_d << endl;
    cout << "Difference = " << result1_d - result2_d << endl;

    // -------------------------------------------------------
    // Find machine epsilon (smallest detectable difference)
    // -------------------------------------------------------

    float eps_f = 1.0f;
    while ((1.0f + eps_f / 2.0f) > 1.0f)
        eps_f /= 2.0f;

    double eps_d = 1.0;
    while ((1.0 + eps_d / 2.0) > 1.0)
        eps_d /= 2.0;

    cout << "\n------ MACHINE EPSILON ------" << endl;
    cout << "Float epsilon  ≈ " << eps_f << endl;
    cout << "Double epsilon ≈ " << eps_d << endl;

    return 0;
}
