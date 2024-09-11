#include <iostream>
using namespace std;

class Shape {
    double radius, length, width;
public:
    Shape(double r) : radius(r), length(0), width(0) {}
    Shape(double l, double w) : length(l), width(w), radius(0) {}
    double perimeterCircle() { return 2 * 3.14159 * radius; }
    double perimeterRectangle() { return 2 * (length + width); }
    ~Shape() {}
};

int main() {
    Shape circle(5.0);
    cout << "Perimeter of circle: " << circle.perimeterCircle() << endl;
    
    Shape rectangle(10.0, 5.0);
    cout << "Perimeter of rectangle: " << rectangle.perimeterRectangle() << endl;
    
    return 0;
}
