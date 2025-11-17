#include <cstdio>

class Temperature {
    double celsius;
public:
    Temperature(double c) : celsius(c) {}
    double toFahrenheit() const { return (celsius * 9.0 / 5.0) + 32.0; }
    void display() const {
        printf("Celsius: %.2f C, Fahrenheit: %.2f F\n", celsius, toFahrenheit());
    }
};

int main() {
    Temperature t(25.0); // sample
    t.display();
    return 0;
}
