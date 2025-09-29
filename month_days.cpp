// Month and Days Calculator with Leap Year Consideration
#include <iostream>
using namespace std;

int main() {
    int month, year, days;
    cout << "Enter month number (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Leap year check
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;
        default:
            cout << "Invalid month number." << endl;
            return 1;
    }
    cout << "Number of days in month " << month << " of year " << year << ": " << days << endl;
    return 0;
}
