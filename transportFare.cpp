#include <iostream>
using namespace std;

class Transport {
public:
    virtual float fare(int distance) = 0;
};

class Bus : public Transport {
public:
    float fare(int distance) {
        return distance * 5;
    }
};

class Train : public Transport {
public:
    float fare(int distance) {
        return distance * 3.5;
    }
};

class Flight : public Transport {
public:
    float fare(int distance) {
        return distance * 15;
    }
};

int main() {
    Transport *t;

    t = new Bus();
    cout << "Bus Fare: " << t->fare(50) << endl;
    delete t;

    t = new Train();
    cout << "Train Fare: " << t->fare(50) << endl;
    delete t;

    t = new Flight();
    cout << "Flight Fare: " << t->fare(50) << endl;
    delete t;

    return 0;
}

