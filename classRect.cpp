#include <iostream>
using namespace std;

class Rectangle {
private:
    
    double length;
    double width;

public:
    // constructor for length and breadth
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    
    double calculateArea() const {
        return length * width;
    }

    double calculatePerimeter() const {
        return 2 * (length + width);
    }

    void displayDetails() const {
        cout << "Length of first rectangle is : " << length << endl;
        cout << "Width of first rectangle is : " << width << endl;
        
        cout << "Area of second rectangle is: " << calculateArea() << endl;
        cout << "Perimeter of second rectangle is: " << calculatePerimeter() << endl;
        cout<<"---------------------"<<endl;
    }
};

int main() {
   
    // displays the details of first rectangle
    Rectangle rect(10.0, 5.0);
    rect.displayDetails();

    // displays the details of second rectangle
    Rectangle rect2(15.0, 8.0);
    rect2.displayDetails();

    return 0;
}
