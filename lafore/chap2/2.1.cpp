#include<iostream>

using namespace std;


int main(){
    float data;
    cout << "Enter gallons: ";
    cin >> data;

    cout << "Equivalent cubic feet: " << data * 7.481 << endl;
    return 0;
}