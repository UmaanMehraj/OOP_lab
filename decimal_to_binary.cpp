#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned long long n;
    cout << "Enter a non-negative integer (decimal): ";
    if (!(cin >> n)) {
        cout << "Invalid input. Exiting.\n";
        return 1;
    }

    if (n == 0) {
        cout << "Binary: 0\n";
        return 0;
    }

    string bits = "";
    while (n > 0) {
        int bit = (int)(n % 2);
        bits = char('0' + bit) + bits;
        n /= 2;
    }

    cout << "Binary: " << bits << "\n";
    return 0;
}
