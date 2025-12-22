#include<iostream>

using namespace std;


class Int{
    protected:
        int var;
    public:
        Int(): var(0) {};
        Int(int z): var(z) {};
        void display(){cout << var << endl; }
        void add(Int x, Int y){var = x.var + y.var;}
};

int main(){

    Int num1;
    Int num2 = Int(2);
    Int num3 = Int(3);
    num1.add(num2, num3);

    num1.display();


  return 0;
}