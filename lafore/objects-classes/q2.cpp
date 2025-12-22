#include <iostream>

using namespace std;

class toolBooth{
    protected:
        unsigned int number;
        double amount;
    public:
        toolBooth(): number(0), amount(0.0){};
        void payingCar(){
            number++;
            amount = amount + 0.50;
        }
        void noPayCar(){
            number++;
        }

        void display(){
            cout << "Number of cars: " << number << endl;
            cout << "Total Amount: " << amount << endl;
        }
};

int main(){
    toolBooth obj;
    
    for(int i = 0; i < 3; i++){
        obj.payingCar();
    }
    for(int i = 0; i < 9; i++){
        obj.noPayCar();
    }

    obj.display();

    return 0;
}