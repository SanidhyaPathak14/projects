#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Default constructor
    Point() {
        x = 0;
        y = 0;
        cout << "Default constructor call hua " << endl;
    }

    // Parameterized constructor
    Point(int Val1, int Val2) {
        x = Val1;
        y = Val2;
        cout << "Parameterized constructor call hua " << endl;
    }

    // Copy constructor
    Point(const Point &p) {
        x = p.x;
        y = p.y;
        cout << "Copy constructor call hua " << endl;
    }

   
    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;              //  this line calls Default constructor
    Point p2(5, 10);       //  this line calls Parameterized constructor
    Point p3 = p2;         //  this line calls Copy constructor

    p1.display();
    p2.display();
    p3.display();

    return 0;
}








