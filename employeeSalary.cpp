#include <iostream>
using namespace std;

class Employee {
public:
    virtual float calculateSalary() { return 0; }
};

class FullTimeEmployee : public Employee {
    float basic, hra, da;
public:
    FullTimeEmployee(float b, float h, float d) : basic(b), hra(h), da(d) {}
    float calculateSalary() {
        return basic + hra + da;
    }
};

class PartTimeEmployee : public Employee {
    int hours;
    float rate;
public:
    PartTimeEmployee(int h, float r) : hours(h), rate(r) {}
    float calculateSalary() {
        return hours * rate;
    }
};

class Intern : public Employee {
    float stipend;
public:
    Intern(float s) : stipend(s) {}
    float calculateSalary() {
        return stipend;
    }
};

int main() {
    Employee *e;

    e = new FullTimeEmployee(15000, 5000, 3000);
    cout << "Full Time Salary: " << e->calculateSalary() << endl;
    delete e;

    e = new PartTimeEmployee(40, 200);
    cout << "Part Time Salary: " << e->calculateSalary() << endl;
    delete e;

    e = new Intern(5000);
    cout << "Intern Salary: " << e->calculateSalary() << endl;
    delete e;

    return 0;
}
