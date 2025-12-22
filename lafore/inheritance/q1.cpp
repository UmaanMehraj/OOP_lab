#include<iostream>

using namespace std;

class Publication{
    protected:
        string title;
        float price;
    public:
        Publication(): title(""), price(0){}
        Publication(string x, int rate): title(x), price(rate){}

    void getData(){
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter price: ";
        cin >> price;
    }

    void putData(){
        cout << "Title: " << title <<  endl << "Price: " << price << endl;
    }
};


class Book: public Publication{
    protected:
        int pageCount;
    public:
        Book(): pageCount(0), Publication("hello", 67){}

    void getData(){
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter page count: ";
        cin >> pageCount;
    }
        void putData(){
        cout << "Title: " << title <<  endl << "Price: " << price <<  endl << "Page count: " << pageCount << endl;
    }

};

class Tape: public Publication{
    protected:
        float playTime;
    public:
        Tape(): playTime(0.0F), Publication("Hey", 66){}
    
        void getData(){
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter play time (in minutes): ";
        cin >> playTime;
        
    }

        void putData(){
        cout << "Title: " << title <<  endl << "Price: " << price <<  endl << "Play Time: " << playTime << endl;
    }
    
};


int main(){

    Book b1;
    b1.getData();
    b1.putData();

    Tape t1;
    t1.getData();
    t1.putData();

    return 0;
}