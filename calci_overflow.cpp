#include <iostream>
#include <cmath>
using namespace std;

// Define limits manually
#define INT_MAX_VAL 2147483647
#define INT_MIN_VAL -2147483648
#define FLT_MAX_VAL 3.40282347e+38F
#define FLT_MIN_VAL 1.17549435e-38F

void intCalc(int a, int b, char op) {
    long long result; // use larger type to detect overflow

    switch (op) {
        case '+':
            result = (long long)a + b;
            if (result > INT_MAX_VAL || result < INT_MIN_VAL)
                cout << "Warning: Integer overflow in addition.\n";
            else
                cout << "Result = " << (int)result << endl;
            break;

        case '-':
            result = (long long)a - b;
            if (result > INT_MAX_VAL || result < INT_MIN_VAL)
                cout << "Warning: Integer overflow in subtraction.\n";
            else
                cout << "Result = " << (int)result << endl;
            break;

        case '*':
            result = (long long)a * b;
            if (result > INT_MAX_VAL || result < INT_MIN_VAL)
                cout << "Warning: Integer overflow in multiplication.\n";
            else
                cout << "Result = " << (int)result << endl;
            break;

        case '/':
            if (b == 0)
                cout << "Error: Division by zero not allowed.\n";
            else
                cout << "Result = " << a / b << endl;
            break;

        case '%':
            if (b == 0)
                cout << "Error: Modulus by zero not allowed.\n";
            else
                cout << "Result = " << a % b << endl;
            break;

        default:
            cout << "Invalid operator.\n";
    }
}

void floatCalc(float a, float b, char op) {
    double result;

    switch (op) {
        case '+':
            result = (double)a + b;
            if (result > FLT_MAX_VAL)
                cout << "Warning: Float overflow in addition.\n";
            else if (fabs(result) < FLT_MIN_VAL && result != 0)
                cout << "Warning: Float underflow in addition.\n";
            else
                cout << "Result = " << (float)result << endl;
            break;

        case '-':
            result = (double)a - b;
            if (result > FLT_MAX_VAL)
                cout << "Warning: Float overflow in subtraction.\n";
            else if (fabs(result) < FLT_MIN_VAL && result != 0)
                cout << "Warning: Float underflow in subtraction.\n";
            else
                cout << "Result = " << (float)result << endl;
            break;

        case '*':
            result = (double)a * b;
            if (result > FLT_MAX_VAL)
                cout << "Warning: Float overflow in multiplication.\n";
            else if (fabs(result) < FLT_MIN_VAL && result != 0)
                cout << "Warning: Float underflow in multiplication.\n";
            else
                cout << "Result = " << (float)result << endl;
            break;

        case '/':
            if (b == 0)
                cout << "Error: Division by zero not allowed.\n";
            else {
                result = (double)a / b;
                if (result > FLT_MAX_VAL)
                    cout << "Warning: Float overflow in division.\n";
                else if (fabs(result) < FLT_MIN_VAL && result != 0)
                    cout << "Warning: Float underflow in division.\n";
                else
                    cout << "Result = " << (float)result << endl;
            }
            break;

        default:
            cout << "Invalid operator.\n";
    }
}

void doubleCalc(double a, double b, char op) {
    double result;

    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero not allowed.\n";
                return;
            }
            result = a / b;
            break;
        default:
            cout << "Invalid operator.\n";
            return;
    }

    cout << "Result = " << result << endl;
}

int main() {
    int choice;
    char op;

    cout << "Select Data Type:\n";
    cout << "1. int\n2. float\n3. double\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter operation (+, -, *, /, %): ";
    cin >> op;

    if (choice == 1) {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        intCalc(a, b, op);
    } 
    else if (choice == 2) {
        float a, b;
        cout << "Enter two floats: ";
        cin >> a >> b;
        floatCalc(a, b, op);
    } 
    else if (choice == 3) {
        double a, b;
        cout << "Enter two doubles: ";
        cin >> a >> b;
        doubleCalc(a, b, op);
    } 
    else {
        cout << "Invalid data type choice.\n";
    }

    return 0;
}
