#include <cstdio>

class Rectangle {
    double length;
    double width;
public:
    // constructor: both length and width
    Rectangle(double l, double w) : length(l), width(w) {}
    // constructor: square
    Rectangle(double l) : length(l), width(l) {}

    double area() const { return length * width; }
    double perimeter() const { return 2 * (length + width); }
    void display() const {
        printf("Length: %.2f, Width: %.2f\n", length, width);
        printf("Area: %.2f, Perimeter: %.2f\n", area(), perimeter());
    }
};

int main() {
    Rectangle r1(5.0, 3.0); // rectangle
    Rectangle r2(4.0);      // square

    printf("Rectangle r1:\n");
    r1.display();
    printf("\nRectangle r2 (square):\n");
    r2.display();
    return 0;
}
