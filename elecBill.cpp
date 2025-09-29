#include<iostream>

using namespace std;


int main(){
    int units;
    float bill = 0;
    cout << "Enter units consumed: ";
    cin >> units;
    
    
    if (units <= 100){
        bill = units * 1.5;
    }
    else if (units <= 200){
        bill = 100 * 1.5 + (units - 100) * 2.5;
    }
    else {
        bill = 100 *1.5 + 100 *2.5 + (units - 200) * 4.0;
    }

    cout << "Electricty Bill is: " << bill <<endl;

    return 0;

}