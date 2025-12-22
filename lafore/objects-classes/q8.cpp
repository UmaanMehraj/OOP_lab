#include<iostream>

using namespace std;

class Fun{
    protected:
        int s_no;
        static int counter;
    public: 
        Fun(): s_no(++counter){
        }
        void customNum(){
            cout << "Enter Serial Number: ";
            cin >> s_no;
        }
        void show(){
            cout << "I am object with serial: " << s_no << endl;
        }
};

int Fun::counter = 0;

int main(){
    Fun f1;
    f1.show();

    Fun f2;
    f2.show();

    return 0;
}