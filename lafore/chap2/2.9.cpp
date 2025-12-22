#include <iostream>

using namespace std;


int main(){
    int num1, num2, num3, num4;
    char dummy = '/';
    cout << "Enter first fraction (x/y): ";
    cin >> num1 >> dummy >> num2;

    cout << "Enter second fraction (x/y): ";
    cin >> num3 >> dummy >> num4;

    int sum1 = num1 * num4 + num2*num3;
    int sum2 = num2 * num4;

    cout << "Sum: " << sum1 << "/" << sum2 << endl;
    return 0;
}