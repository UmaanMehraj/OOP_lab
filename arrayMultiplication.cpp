#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible (columns of A != rows of B)." << endl;
        return 0;
    }

    int A[10][10], B[10][10];
    cout << "Enter elements of first matrix (A):" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter elements of second matrix (B):" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Integer matrix multiplication
    int resultInt[10][10] = {0};
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                resultInt[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Convert to float and double
    float Af[10][10], Bf[10][10];
    double Ad[10][10], Bd[10][10];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            Af[i][j] = (float)A[i][j];
            Ad[i][j] = (double)A[i][j];
        }
    }
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            Bf[i][j] = (float)B[i][j];
            Bd[i][j] = (double)B[i][j];
        }
    }

    // Float matrix multiplication
    float resultFloat[10][10] = {0};
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                resultFloat[i][j] += Af[i][k] * Bf[k][j];
            }
        }
    }

    // Double matrix multiplication
    double resultDouble[10][10] = {0};
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                resultDouble[i][j] += Ad[i][k] * Bd[k][j];
            }
        }
    }

    // Display results
    cout << "\nMatrix Multiplication Results:\n";

    cout << "\nInteger Result Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << resultInt[i][j] << "\t";
        cout << endl;
    }

    cout << "\nFloat Result Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << resultFloat[i][j] << "\t";
        cout << endl;
    }

    cout << "\nDouble Result Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << resultDouble[i][j] << "\t";
        cout << endl;
    }

    // Compare differences (accuracy/overflow)
    cout << "\n--- Comparison (Double vs Float vs Int) ---\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            double diffF = resultDouble[i][j] - resultFloat[i][j];
            double diffI = resultDouble[i][j] - resultInt[i][j];

            cout << "Element [" << i << "][" << j << "]: ";
            cout << "Double = " << resultDouble[i][j]
                 << ", Float = " << resultFloat[i][j]
                 << ", Int = " << resultInt[i][j] << endl;

            if (diffF != 0)
                cout << "  → Precision loss between float and double: " << diffF << endl;
            if (diffI != 0)
                cout << "  → Difference due to rounding/overflow (int vs double): " << diffI << endl;
        }
    }

    return 0;
}
