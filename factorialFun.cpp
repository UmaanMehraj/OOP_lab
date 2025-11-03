#include<iostream>

using namespace std;


int factorial(int n);

int main(){
    int num;
    cout << "Enter number: " ;
    cin >> num;
    if(factorial(num)!= -1)
    {
       cout <<  factorial(num) << endl;
    }
    return 0;
}


int factorial(int n){
    if ( n < 0){
        cout << "Factorial is not defined for negative numbers" << endl;
        return -1;
    }
    else if ( n ==  1 || n == 0){
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}