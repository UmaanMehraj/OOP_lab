#include <iostream>

using namespace std;


void swapValue(int *a, int *b);

int main(){
    int a = 10, b= 20;
    swapValue(&a, &b);
    cout << "Values after swapping are: " << a << " " << b << endl;
    return 0;
}

void swapValue(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
  