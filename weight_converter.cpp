// Weight Converter: Convert weight between kilograms, pounds, and stones
#include <iostream>
using namespace std;

int main() {
    double weight;
    int choice;
    cout << "Enter your weight: ";
    cin >> weight;
    cout << "Choose the unit of your input:\n1. Kilograms\n2. Pounds\n3. Stones\n";
    cin >> choice;
    double kg, lb, st;
    switch(choice) {
        case 1:
            kg = weight;
            lb = kg * 2.20462;
            st = kg * 0.157473;
            break;
        case 2:
            lb = weight;
            kg = lb / 2.20462;
            st = kg * 0.157473;
            break;
        case 3:
            st = weight;
            kg = st / 0.157473;
            lb = kg * 2.20462;
            break;
        default:
            cout << "Invalid choice." << endl;
            return 1;
    }
    cout << "Weight in Kilograms: " << kg << endl;
    cout << "Weight in Pounds: " << lb << endl;
    cout << "Weight in Stones: " << st << endl;
    return 0;
}
