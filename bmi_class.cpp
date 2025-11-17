#include <cstdio>

class BMI {
    double weight; // kg
    double height; // meters
public:
    BMI(double w, double h) : weight(w), height(h) {}
    double value() const { return weight / (height * height); }
    const char* category() const {
        double b = value();
        if (b < 18.5) return "Underweight";
        if (b < 25.0) return "Normal";
        return "Overweight";
    }
    void display() const {
        printf("Weight: %.2f kg, Height: %.2f m\n", weight, height);
        printf("BMI = %.2f (%s)\n", value(), category());
    }
};

int main() {
    BMI b(70.0, 1.75); // sample
    b.display();
    return 0;
}
