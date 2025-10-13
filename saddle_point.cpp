// Saddle Point in a Matrix (no vectors, no pointers)
// Find element that is minimum in its row and maximum in its column.

#include <iostream>
using namespace std;

int main() {
    const int MAX = 50;
    int r, c;
    cout << "Enter rows and columns (max 50 50): ";
    if (!(cin >> r >> c)) return 0;
    if (r <= 0 || c <= 0 || r > MAX || c > MAX) { cout << "Invalid sizes.\n"; return 0; }

    int a[MAX][MAX];
    cout << "Enter matrix elements (row-wise):\n";
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> a[i][j];

    bool found = false;
    int val = 0, fr = -1, fc = -1;
    for (int i = 0; i < r; ++i) {
        // find minimum in row i
        int minVal = a[i][0];
        int minJ = 0;
        for (int j = 1; j < c; ++j) if (a[i][j] < minVal) { minVal = a[i][j]; minJ = j; }
        // check if minVal is maximum in column minJ
        bool isMax = true;
        for (int ii = 0; ii < r; ++ii) if (a[ii][minJ] > minVal) { isMax = false; break; }
        if (isMax) { found = true; val = minVal; fr = i; fc = minJ; break; }
    }

    if (found) cout << "Saddle point: value = " << val << " at (row,col) = (" << (fr+1) << "," << (fc+1) << ")\n";
    else cout << "No saddle point found.\n";

    return 0;
}
