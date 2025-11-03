#include <iostream>

using namespace std;


int sum(int a, int b);
int sum(int a, int b, int c);
string sum(string s1, string s2);

int main(){
    cout << sum(1, 2) <<  endl;
    cout << sum(1,2,3) <<  endl;
    cout << sum("Hello", "World") << endl;
    return 0;
}

int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b+c;
}

string sum(string s1, string s2){
    return s1 + s2;
}
