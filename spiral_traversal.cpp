// Spiral Traversal of a Matrix
// Print elements in clockwise spiral order starting from top-left.
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

    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    cout << "\nSpiral order:\n";
    while (top <= bottom && left <= right) {
        // left to right
        for (int j = left; j <= right; ++j) cout << a[top * c + j] << " ";
        ++top;
        // top to bottom
        for (int i = top; i <= bottom && left <= right; ++i) cout << a[i * c + right] << " ";
        --right;
        // right to left
        if (top <= bottom) {
            for (int j = right; j >= left; --j) cout << a[bottom * c + j] << " ";
            --bottom;
        }
        // bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) cout << a[i * c + left] << " ";
            ++left;
        }
    }
    cout << '\n';

    delete [] a;
    return 0;
}
