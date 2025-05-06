#include <iostream>
#include <cmath> // For M_PI

using namespace std;

// Base class
class Shape {
public:
    virtual double area() const = 0; 
    virtual void display() const = 0; 
    virtual ~Shape() {} // 
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

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    void display() const override {
        cout << "Rectangle Area: " << area() << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }

    void display() const override {
        cout << "Triangle Area: " << area() << endl;
    }
};


int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(7.0);
    shapes[1] = new Rectangle(5.0, 3.0);
    shapes[2] = new Triangle(6.0, 4.0);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();
        delete shapes[i]; 
    }

    return 0;
}
