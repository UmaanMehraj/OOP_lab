// Row-wise and Column-wise Sorting (no vectors, no pointers)
// Sort each row in ascending order, display matrix, then sort each column in ascending order and display.

#include <iostream>
using namespace std;

int main() {
    const int MAX = 50;
    int r, c;
    cout << "Enter rows and columns (max 50 50): ";
    if (!(cin >> r >> c)) return 0;
    if (r <= 0 || c <= 0 || r > MAX || c > MAX) {
        cout << "Invalid sizes.\n";
        return 0;
    }

    int a[MAX][MAX];
    cout << "Enter matrix elements (row-wise):\n";
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> a[i][j];

    // Row-wise sort (simple bubble sort per row)
    for (int i = 0; i < r; ++i) {
        for (int pass = 0; pass < c - 1; ++pass) {
            for (int j = 0; j < c - 1 - pass; ++j) {
                if (a[i][j] > a[i][j+1]) {
                    int tmp = a[i][j]; a[i][j] = a[i][j+1]; a[i][j+1] = tmp;
                }
            }
        }
    }

    cout << "\nMatrix after row-wise sorting:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) cout << a[i][j] << " ";
        cout << '\n';
    }

    // Column-wise sort (simple bubble sort per column)
    for (int j = 0; j < c; ++j) {
        for (int pass = 0; pass < r - 1; ++pass) {
            for (int i = 0; i < r - 1 - pass; ++i) {
                if (a[i][j] > a[i+1][j]) {
                    int tmp = a[i][j]; a[i][j] = a[i+1][j]; a[i+1][j] = tmp;
                }
            }
        }
    }

    cout << "\nMatrix after column-wise sorting:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
