// Row-wise and Column-wise Sorting
// Sort each row ascending, display matrix, then sort each column ascending and display.
// Uses plain arrays (no vectors).

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    if (!(cin >> r >> c) || r <= 0 || c <= 0) return 0;

    int *a = new int[r * c];
    cout << "Enter matrix elements (row-wise):\n";
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> a[i * c + j];

    // Row-wise sort (simple bubble sort per row)
    for (int i = 0; i < r; ++i) {
        for (int pass = 0; pass < c - 1; ++pass) {
            for (int j = 0; j < c - 1 - pass; ++j) {
                if (a[i * c + j] > a[i * c + j + 1]) {
                    int tmp = a[i * c + j];
                    a[i * c + j] = a[i * c + j + 1];
                    a[i * c + j + 1] = tmp;
                }
            }
        }
    }

    cout << "\nMatrix after row-wise sorting:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) cout << a[i * c + j] << " ";
        cout << '\n';
    }

    // Column-wise sort (bubble sort per column)
    for (int j = 0; j < c; ++j) {
        for (int pass = 0; pass < r - 1; ++pass) {
            for (int i = 0; i < r - 1 - pass; ++i) {
                if (a[i * c + j] > a[(i + 1) * c + j]) {
                    int tmp = a[i * c + j];
                    a[i * c + j] = a[(i + 1) * c + j];
                    a[(i + 1) * c + j] = tmp;
                }
            }
        }
    }

    cout << "\nMatrix after column-wise sorting:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) cout << a[i * c + j] << " ";
        cout << '\n';
    }

    delete [] a;
    return 0;
}
