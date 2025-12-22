#include<iostream>

using namespace std;

class Employee{
    protected:
        int e_no;
        float compensation;
    public:
        Employee(): e_no(0), compensation(0.0){}
        Employee(int x, float y): e_no(x), compensation(y){}

        void display(){
            cout << "Employee Details " << endl;
            cout << "Employee Number: " << e_no << endl;
            cout << "Compensation: " << compensation <<  endl;
        }
};


int main(){
    Employee e1(10, 4500.75), e2(10, 7777);
    Employee e3;

    e1.display();

    e2.display();

    e3.display();

    return 0;
}