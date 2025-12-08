#include <iostream>
using namespace std;

class Robot {
public:
    virtual void performTask() = 0;
};

class CleaningRobot : public Robot {
public:
    void performTask() {
        cout << "Cleaning Robot: Sweeping and mopping floor." << endl;
    }
};

class SecurityRobot : public Robot {
public:
    void performTask() {
        cout << "Security Robot: Scanning for intruders." << endl;
    }
};

class DeliveryRobot : public Robot {
public:
    void performTask() {
        cout << "Delivery Robot: Delivering packages." << endl;
    }
};

int main() {
    Robot *robots[3];

    robots[0] = new CleaningRobot();
    robots[1] = new SecurityRobot();
    robots[2] = new DeliveryRobot();

    for(int i=0; i<3; i++) {
        robots[i]->performTask();
        delete robots[i];
    }

    return 0;
}

