
#include <iostream>
using namespace std;

int main() {
    int n;
    double price, total = 0, tax_rate = 0.18;
    cout << "Enter number of items: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << "Enter price of item " << i << ": ";
        cin >> price;
        total += price;
    }
    double tax = total * tax_rate;
    double grand_total = total + tax;
    cout << "Subtotal: " << total << endl;
    cout << "Tax (5%): " << tax << endl;
    cout << "Total Bill: " << grand_total << endl;
    return 0;
}
