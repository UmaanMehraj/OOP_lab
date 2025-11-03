#include <iostream>
using namespace std;


void print(int value) {
    cout << "Integer version called with value: " << value << endl;
}

void print(double value) {
    cout << "Double version called with value: " << value << endl;
}

void print(char value) {
    cout << "Character version called with value: " << value << endl;
}

void print(int num1, int num2) {
    cout << "Two integers version called with values: " << num1 << " and " << num2 << endl;
}

int main() {
    
    int num = 10;
    double decimal = 3.14;
    char letter = 'A';
    
    cout << "Demonstrating function overloading:\n\n";
    
    print(num);   
    print(decimal);
    print(letter);
    print(5, 7); 
    
    cout << "\nDemonstrating automatic type conversion:\n";
    print(25.5f); 
    return 0;
}