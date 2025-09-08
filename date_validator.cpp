// Date Validator and Day of Week Calculator
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1)
        return false;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(y))
        daysInMonth[1] = 29;
    if (d > daysInMonth[m - 1])
        return false;
    return true;
}

int getDayOfWeek(int d, int m, int y) {
    // Zeller's Congruence
    if (m < 3) {
        m += 12;
        y--;
    }
    int K = y % 100;
    int J = y / 100;
    int f = d + 13 * (m + 1) / 5 + K + K / 4 + J / 4 + 5 * J;
    return f % 7;
}

int main() {
    int d, m, y;
    cout << "Enter date (DD-MM-YYYY): ";
    char dash1, dash2;
    cin >> d >> dash1 >> m >> dash2 >> y;
    if (!isValidDate(d, m, y)) {
        cout << "Invalid date." << endl;
        return 1;
    }
    cout << "Valid date." << endl;
    int dayOfWeek = getDayOfWeek(d, m, y);
    switch(dayOfWeek) {
        case 0: cout << "Saturday"; break;
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
    }
    cout << endl;
    return 0;
}
