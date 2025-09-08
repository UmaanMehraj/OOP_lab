// Age Calculator: Calculate age in years, months, and days
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int birth_day, birth_month, birth_year;
    cout << "Enter your birth date (DD MM YYYY): ";
    cin >> birth_day >> birth_month >> birth_year;

    time_t t = time(0);
    tm *now = localtime(&t);
    int curr_day = now->tm_mday;
    int curr_month = now->tm_mon + 1;
    int curr_year = now->tm_year + 1900;

    int age_year = curr_year - birth_year;
    int age_month = curr_month - birth_month;
    int age_day = curr_day - birth_day;

    if (age_day < 0) {
        age_month--;
        age_day += 30; // Approximate
    }
    if (age_month < 0) {
        age_year--;
        age_month += 12;
    }
    cout << "Your age is: " << age_year << " years, " << age_month << " months, and " << age_day << " days." << endl;
    return 0;
}
