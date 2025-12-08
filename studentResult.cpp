#include <iostream>
using namespace std;

class Student {
public:
    virtual float calculateResult(float marks) { return 0; }
};

class Undergraduate : public Student {
public:
    float calculateResult(float marks) {
        return marks * 0.8;
    }
};

class Postgraduate : public Student {
public:
    float calculateResult(float marks) {
        return marks * 0.9;
    }
};

int main() {
    Student *s;

    s = new Undergraduate();
    cout << "Undergraduate Result: " << s->calculateResult(100) << endl;
    delete s;

    s = new Postgraduate();
    cout << "Postgraduate Result: " << s->calculateResult(100) << endl;
    delete s;

    return 0;
}

