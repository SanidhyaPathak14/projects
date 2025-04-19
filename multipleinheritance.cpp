#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    Parent() {
        cout << "Parent constructor ko call kara." << endl;
    }

    void showParent() {
        cout << "This is the Parent class." << endl;
    }
};

// Now derived our first class
class Child1 : public Parent {
public:
    Child1() {
        cout << "Child1 constructor called." << endl;
    }

    void showChild1() {
        cout << "This is our first  Child class." << endl;
    }
};

//  Now derived our second class
class Child2 : public Parent {
public:
    Child2() {
        cout << "Child2 constructor called." << endl;
    }

    void showChild2() {
        cout << "This is our second Child class." << endl;
    }
};

//  Now, Deriving a class with multiple inheritance
class MultiChild : public Child1, public Child2 {
public:
    MultiChild() {
        cout << "MultiChild constructor called." << endl;
    }

    void showMultiChild() {
        cout << "This is MultiChild class with multiple inheritance." << endl;
    }
};

int main() {
    
MultiChild obj;

    obj.showChild1();
    obj.showChild2();
    obj.showMultiChild();

    return 0;
}
