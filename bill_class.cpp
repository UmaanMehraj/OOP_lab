#include <cstdio>
#include <string>
using std::string;

class Bill {
    int units;
public:
    Bill(int u) : units(u) {}
    // copy constructor
    Bill(const Bill &other) : units(other.units) {}
    double total() const { return units * 5.0; } // ₹5 per unit
    void display(const string &name = "Bill") const {
        printf("%s: Units = %d, Total = Rs %.2f\n", name.c_str(), units, total());
    }
};

int main() {
    Bill original(120);
    Bill copied = original; // invokes copy constructor
    original.display("Original Bill");
    copied.display("Copied Bill");
    return 0;
}
