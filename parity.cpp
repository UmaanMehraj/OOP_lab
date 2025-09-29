#include<iostream>

using namespace std;


int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(num > 0){
        if(num % 2 == 0){
            cout << "Positive Even" << endl;
        }
        else cout << "Positive odd" << endl;
        
    }

    else if ( num < 0){        
        if(num % 2 == 0){
            cout << "Negative Even" << endl;
        }
        else cout << "Positive odd" << endl;
        }

    else{
        cout << "Number is zero!" << endl;
    }
}