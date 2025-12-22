#include<iostream>

using namespace std;


int main(){
    const int num1 = 10;
    int num2 = 10;
    num2 += num1;

    cout << "Output: ";
    cout << num1 << endl << num2 << endl << --num2 << endl;

    return 0;
}