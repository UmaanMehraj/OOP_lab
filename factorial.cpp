#include<iostream>

using namespace std;
int main(){
    double factorial = 1;
    int number;

    cout << "Enter number: ";

    cin >> number;

    if (number == 1 || number == 0) factorial = 1;
    else{
        for (int i = 2; i <= number; i++){
            factorial *= i;
        }
    }
    cout << "Factorial of " << number << " is: " << factorial;
}