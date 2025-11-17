#include <cstdio>
#include <cmath>

class CompoundInterest {
    double principal;
    double rate; // percent per annum
    double time; // years
    int n;       // times compounded per year
public:
    CompoundInterest(double p, double r, double t, int times_per_year = 1)
        : principal(p), rate(r), time(t), n(times_per_year) {}

    double amount() const {
        double rn = rate / 100.0 / n;
        return principal * pow(1.0 + rn, n * time);
    }
    double compoundInterest() const { return amount() - principal; }
    void display() const {
        printf("P=%.2f, R=%.2f%%, t=%.2f years, n=%d\n", principal, rate, time, n);
        printf("Amount A = %.2f, Compound interest = %.2f\n", amount(), compoundInterest());
    }
};

int main() {
    CompoundInterest ci1(10000.0, 5.0, 2.0); // n defaults to 1
    CompoundInterest ci2(10000.0, 5.0, 2.0, 4); // compounded quarterly
    printf("Compound interest examples:\n");
    ci1.display();
    printf("\n");
    ci2.display();
    return 0;
}
