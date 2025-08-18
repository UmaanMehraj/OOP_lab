#include<iostream>

using namespace std;

int main(){
    char choice;
    int a, b;
    float result = 0;

    cout << "Enter number 1: ";
    cin >> a;

    cout << "Enter number 2: ";
    cin >> b;

    cout << "Enter choice: ";
    cin >> choice;


        switch(choice){
            case '+':
            result= a + b;
            break;
            case '-':
            result = a - b;
            break;
            case '*':
            result = a*b;
            break;
            case '/':
            result = a/b;
            break;
        }

    cout << "Result: " <<  result;

}