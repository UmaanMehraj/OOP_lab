// Spiral Traversal of a Matrix (no vectors, no pointers)
// Print matrix elements in clockwise spiral order starting from top-left.

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

    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    cout << "\nSpiral order:\n";
    while (top <= bottom && left <= right) {
        // left -> right
        for (int j = left; j <= right; ++j) cout << a[top][j] << " ";
        ++top;
        // top -> bottom
        for (int i = top; i <= bottom; ++i) cout << a[i][right] << " ";
        --right;
        // right -> left
        if (top <= bottom) {
            for (int j = right; j >= left; --j) cout << a[bottom][j] << " ";
            --bottom;
        }
        // bottom -> top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) cout << a[i][left] << " ";
            ++left;
        }
    }
    cout << '\n';
    return 0;
}
