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


int main(){
    Angle a1;
    a1.getData();
    a1.showData();
    
    return 0;
}