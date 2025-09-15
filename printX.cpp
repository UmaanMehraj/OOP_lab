#include<iostream>

using namespace std;

int main(){
    int rows = 20;

    for (int i = 1; i < rows; i++) {
        for(int j = 0; j < i; j++){
            if (i & 1)
            cout << "X";
        }
        if (i & 1){
             cout << "\n";
             rows++;

        }
    }
}   