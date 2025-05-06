#include <iostream>
#include <cmath> 

using namespace std;

// Base class
class Shape {
public:
    virtual double area() const {
        return 0;
    }

    virtual void display() const {
        cout << "Shape Area: " << area() << endl;
    }

    virtual ~Shape() {} 
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    void display() const override {
        cout << "Circle Area: " << area() << endl;
    }
};

// Derived class: Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }

    void display() const override {
        cout << "Square Area: " << area() << endl;
    }
};

// Main function
int main() {
    Shape* shape1;
    Shape* shape2;

    shape1 = new Circle(5.0);
    shape2 = new Square(4.0);

    
    shape1->display(); 
    shape2->display(); 

    
    delete shape1;
    delete shape2;

    return 0;
}
