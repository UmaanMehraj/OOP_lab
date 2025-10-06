#include <iostream>

using namespace std;

int opAnd(int inp1, int inp2);
int opOr(int inp1, int inp2);
int opNot(int inp);
int opXOR(int inp1, int inp2);

int main(){
    bool inp1, inp2;

    cout << "Enter inputs (0 or some non-zero number): ";
    cin >> inp1 >> inp2;

    cout << inp1 << " " << inp2 << endl;

    cout << opAnd(inp1, inp2) << endl;

}

int opAnd(int inp1, int inp2){
    return inp1 & inp2;
}

int opOr(int inp1, int inp2){
    return inp1 | inp2;
}

int opNot(int inp){
    return !(inp);
}

int opXOR(int inp1, int inp2){
    return inp1 ^ inp2;
}