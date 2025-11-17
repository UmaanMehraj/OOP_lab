#include <iostream>
using namespace std;

class Distance {
    int meters;
    int centimeters; // 0..99
public:
    Distance(int m = 0) : meters(m), centimeters(0) {}
    Distance(int m, int cm) : meters(m), centimeters(cm) {
        normalize();
    }
    void normalize() {
        if (centimeters >= 100) {
            meters += centimeters / 100;
            centimeters = centimeters % 100;
        } else if (centimeters < 0) {
            // handle negative centimeters if needed
            int borrow = (abs(centimeters) + 99) / 100;
            meters -= borrow;
            centimeters += borrow * 100;
        }
    }
    Distance add(const Distance &other) const {
        Distance res;
        res.meters = meters + other.meters;
        res.centimeters = centimeters + other.centimeters;
        res.normalize();
        return res;
    }
    void display() const {
        cout << meters << " m " << centimeters << " cm\n";
    }
};

int main() {
    Distance d1(2, 75); // 2 m 75 cm
    Distance d2(1, 50); // 1 m 50 cm
    cout << "Distance d1: "; d1.display();
    cout << "Distance d2: "; d2.display();
    Distance total = d1.add(d2);
    cout << "Total distance: "; total.display();
    return 0;
}
