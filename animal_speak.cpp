#include <iostream>
using namespace std;


class Animal {
public:
    virtual void speak() const {
        cout << "Animal speaks!" << endl;
    }

    virtual ~Animal() {} 
};

// Derived class: Dog
class Dog : public Animal {
public:
    void speak() const override {
        cout << "Dog says: Woof!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void speak() const override {
        cout << "Cat says: Meow!" << endl;
    }
};

// Derived class: Bird
class Bird : public Animal {
public:
    void speak() const override {
        cout << "Bird says: Tweet!" << endl;
    }
};


int main() {
    Animal* animals[3];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Bird();

    for (int i = 0; i < 3; ++i) {
        animals[i]->speak(); 
        delete animals[i];   
    }

    return 0;
}
