#include<iostream>

using namespace std;

class Date{
    protected:
        int month, day, year;
    public:
        Date(): month(1), day(1), year(1970){}

        void getDate(){
            char dummy = '/';
            cout << "Enter date (Month/Day/Year): ";
            cin >> month >> dummy >> day >> dummy >> year;

        }

        void showDate(){
            cout << "Date: " << month << "/" << day << "/" << year << endl;
        }

};


int main(){

    Date d1;
    d1.getDate();
    d1.showDate();
    return 0;
}