#include<iostream>

using namespace std;

int main(){
    int num1, num2, num3, num4;
    cout << "Enter numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 > num2){
        if(num1 > num3){
            if (num1 > num4){
                cout << "Number 1 is largest" << endl;
            }
            else{
                cout << "Number 4 is largest" << endl;
            }
        }
        else {
            if (num3 > num4){
                cout << "Number 3 is the largest" << endl;
            }
            else{
                cout << "Number 4 is the largest" << endl; 
            }
        }
    }
    else if (num2 > num1){
        if ( num2 > num3){
            if(num2 > num4){
                cout << "Number 2 is the largest" << endl;
            }
            else{
                cout << "Number 4 is the largest" << endl;
            }

        }
        else{
            if(num3 > num4){
                cout << "Number 3 is the largest" << endl;
            }
            else{
                cout << "Number 4 is the largest" <<  endl;
            }
        }
    }
}