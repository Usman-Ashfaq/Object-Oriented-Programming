#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0;  // Pure virtual function
};

/lass Circle : public Shape {
   double radius;
//public:
//    Circle(double r) : radius(r) {}
//    double area() override {
//        return M_PI * radius * radius;
//    }
};

//class Rectangle : public Shape {
//    double width, height;
//public:
//    Rectangle(double w, double h) : width(w), height(h) {}
//    double area() override {
//        return width * height;
//    }
//};
//
//int main() {
//    Shape* shape1 = new Circle(5.0);
//    Shape* shape2 = new Rectangle(4.0, 6.0);
//
//    cout << "Circle area: " << shape1->area() << endl;    // Circle area: 78.5398
//    cout << "Rectangle area: " << shape2->area() << endl; // Rectangle area: 24.0
//
//    delete shape1;
//    delete shape2;
//    return 0;
//}
