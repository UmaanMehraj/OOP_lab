#include<iostream>

using namespace std;

int main(){
    int year;

    cout << "Enter year: ";
    cin >> year;
    if (year % 400 == 0) cout << year << " is a leap year";
    else if (year % 4 == 0 && year % 100 != 0) cout << year << " is a leap year";
    else {
        cout << "Not a leap year" << endl;
        cout << "Next five leap years are!" << endl;
        double start = year/4;

        for (int i = start + 1  ; i < start+ 5  ; i++){
            cout << i * 4 << endl;
        }
    }
}