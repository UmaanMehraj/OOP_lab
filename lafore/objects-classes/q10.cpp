#include <iostream>

using namespace std;

class Angle{
    protected:
        int degrees;
        float minutes;
        char direction;
    public:
        Angle(): degrees(0), minutes(0), direction('N'){}

        void getData(){
            cout << "Enter degrees, minutes, direction: ";
            cin >> degrees >> minutes >> direction;


        }

        void showData(){
            cout <<"Data: "  << degrees << '\xF8' << minutes << '\'' << direction << endl;  
        }

};


class Ship{
    protected:
        static int counter;
        int number;
        Angle location;
    public:
        Ship(): number(++counter){}
        void getData(){
            location.getData();
        }

        void display(){
            cout << "Ship Details: " << endl;
            cout << "Serial is " << number << endl;
            location.showData();
        }
        

};

int Ship::counter = 0;

int main(){
    Ship s1, s2, s3;
    s1.getData();
    s2.getData();
    s3.getData();

    s1.display();
    s2.display();
    s3.display();
    return 0;
}