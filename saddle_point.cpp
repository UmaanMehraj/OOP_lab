// Saddle Point in a Matrix
// Find an element that is minimum in its row and maximum in its column.
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

    bool found = false;
    int found_val = 0, found_r = -1, found_c = -1;

    for (int i = 0; i < r && !found; ++i) {
        // find min in row i
        int minVal = a[i * c + 0];
        int minJ = 0;
        for (int j = 1; j < c; ++j) {
            if (a[i * c + j] < minVal) { minVal = a[i * c + j]; minJ = j; }
        }
        // check if minVal is maximum in its column minJ
        bool isMaxInCol = true;
        for (int ii = 0; ii < r; ++ii) {
            if (a[ii * c + minJ] > minVal) { isMaxInCol = false; break; }
        }
        if (isMaxInCol) {
            found = true;
            found_val = minVal;
            found_r = i;
            found_c = minJ;
        }
    }

    if (found) {
        cout << "Saddle point found: value = " << found_val << " at (row,col) = (" << (found_r+1) << "," << (found_c+1) << ")\n";
    } else {
        cout << "No saddle point in the matrix.\n";
    }

    delete [] a;
    return 0;
}
