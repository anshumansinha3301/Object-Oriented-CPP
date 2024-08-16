#include <iostream>
using namespace std;

class Shape {
private:
    double radius;
    double length;
    double width;

public:
    // Constructor for Circle (radius)
    Shape(double r) : radius(r), length(0), width(0) {
        cout << "Circle created with radius: " << radius << endl;
    }

    // Constructor for Rectangle (length, width)
    Shape(double l, double w) : radius(0), length(l), width(w) {
        cout << "Rectangle created with length: " << length << " and width: " << width << endl;
    }

    // Destructor
    ~Shape() {
        cout << "Shape destroyed." << endl;
    }

    // Function to calculate the perimeter of the circle
    double perimeterCircle() {
        return 2 * 3.14159 * radius;
    }

    // Function to calculate the perimeter of the rectangle
    double perimeterRectangle() {
        return 2 * (length + width);
    }
};

int main() {
    // Create a circle with radius 5
    Shape circle(5);
    cout << "Perimeter of Circle: " << circle.perimeterCircle() << endl;

    // Create a rectangle with length 10 and width 5
    Shape rectangle(10, 5);
    cout << "Perimeter of Rectangle: " << rectangle.perimeterRectangle() << endl;

    return 0;
}
