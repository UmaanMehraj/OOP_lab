#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int num1_real, num1_img, num2_real, num2_img;
    cout << "Enter real part for number 1: ";
    cin >> num1_real;

    cout << "Enter imaginary part for number 1: ";
    cin >> num1_img;

    cout << "Enter real part for number 2: ";
    cin >> num2_real;

    cout << "Enter imaginary part for number 2: ";
    cin >> num2_img;

    double magnitude_num1 = sqrt(pow(num1_real, 2) + pow(num1_img, 2)); 
    double magnitude_num2 = sqrt(pow(num2_real, 2) + pow(num2_img, 2)); 

    if (magnitude_num1 > magnitude_num2) cout << "First number has greater magnitude than the second" << '\n';
    else if (magnitude_num2 > magnitude_num1) cout << "Second number has greater magnitude than the first" << '\n';
    else cout << "Equal numbers!" << '\n';
}