#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer to count down from: ";
    if (!(cin >> n) || n < 0) {
        cout << "Invalid input. Exiting.\n";
        return 1;
    }

    cout << "Countdown (no delays):\n";
    for (int i = n; i >= 0; --i) {
        cout << i;
        if (i > 0) cout << " ";
    }
    cout << "\n";
    return 0;
}
