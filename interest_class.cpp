#include <cstdio>

class Interest {
    double principal;
    double rate; // percent per annum
    double time; // years
public:
    Interest(double p, double r, double t) : principal(p), rate(r), time(t) {}
    double simpleInterest() const {
        return (principal * rate * time) / 100.0;
    }
    void display() const {
        printf("Principal: %.2f, Rate: %.2f%%, Time: %.2f years\n", principal, rate, time);
        printf("Simple Interest = (P*R*T)/100 = %.2f\n", simpleInterest());
    }
};

int main() {
    Interest in(10000.0, 5.5, 2.0); // sample values
    in.display();
    return 0;
}
