
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double bill, tipPercent;
    int people;

    cout << "Enter bill amount (in Rs): ";
    if (!(cin >> bill) || bill < 0) { cout << "Invalid bill amount.\n"; return 1; }

    cout << "Enter tip percentage (e.g. 10 for 10%): ";
    if (!(cin >> tipPercent) || tipPercent < 0) { cout << "Invalid tip percent.\n"; return 1; }

    cout << "Enter number of people to split between: ";
    if (!(cin >> people) || people <= 0) { cout << "Invalid number of people.\n"; return 1; }

    double tip = bill * (tipPercent / 100.0);
    double total = bill + tip;

    double per_person_bill = bill / people;
    double per_person_tip = tip / people;
    double per_person_total = total / people;

    cout << fixed << setprecision(2);
    cout << "\nBill: Rs " << bill << "\n";
    cout << "Tip (" << tipPercent << "%): Rs " << tip << "\n";
    cout << "Total: Rs " << total << "\n";

    cout << "\nPer-person breakdown (equal split):\n";
    cout << "  Bill share: Rs " << per_person_bill << "\n";
    cout << "  Tip share : Rs " << per_person_tip << "\n";
    cout << "  Total each: Rs " << per_person_total << "\n";

    return 0;
}
