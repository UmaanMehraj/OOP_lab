#include<iostream>

using namespace std;


int main(){
    float dollars;
    const float POUND = 1.487, FRANC = 0.172, DEUTSCHEMARK = 0.584, YEN = 0.00955;

    cout << "Enter dollars: ";
    cin >> dollars;

    cout << dollars << " = " << dollars * POUND << " POUNDS" << endl << dollars * FRANC << " francs" << endl << dollars * DEUTSCHEMARK << " deutschemarks"
    << endl << dollars * YEN << " yens" << endl; 
    return 0;
}