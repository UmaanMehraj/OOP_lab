// Discount Calculator based on Purchase Value
#include <iostream>
using namespace std;

int main() {
    double purchase, discountRate;
    cout << "Enter purchase value (Rs): ";
    cin >> purchase;

    // Nested conditional operators for discount logic
    discountRate = (purchase < 100) ? 0 :
                   (purchase <= 500) ? 0.10 :
                   (purchase <= 1000) ? 0.15 : 0.20;

    double discount = purchase * discountRate;
    double total = purchase - discount;

    cout << "Discount applied: Rs " << discount << endl;
    cout << "Total price after discount: Rs " << total << endl;
    return 0;
}
