#include<iostream>
#include<ctype.h>

using namespace std;


int main(){
    char letter;
    cout << "Enter letter: ";
    cin >> letter;

    int res = islower(letter);

    cout << "Output: " << res << endl;

    return 0;
}