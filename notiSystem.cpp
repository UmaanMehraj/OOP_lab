#include <iostream>
using namespace std;

class Notification {
public:
    virtual void send(string msg) {
        cout << "Base Notification: " << msg << endl;
    }
};

class EmailNotification : public Notification {
public:
    void send(string msg) {
        cout << "Email Sent: " << msg << endl;
    }
};

class SMSNotification : public Notification {
public:
    void send(string msg) {
        cout << "SMS Sent: " << msg << endl;
    }
};

class AppNotification : public Notification {
public:
    void send(string msg) {
        cout << "App Notification: " << msg << endl;
    }
};

int main() {
    Notification *n;

    n = new EmailNotification();
    n->send("Hello User!");
    delete n;

    n = new SMSNotification();
    n->send("Your OTP is 2345");
    delete n;

    n = new AppNotification();
    n->send("You have a new message");
    delete n;

    return 0;
}

