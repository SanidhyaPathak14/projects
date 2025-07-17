#include <iostream>
#include <string>

using namespace std;


class Device {
public:
    virtual void turnOn() const = 0; 
    virtual ~Device() {}             
};

// Derived class: Laptop
class Laptop : public Device {
private:
    string brand;

public:
    Laptop(const string& b) : brand(b) {}

    void turnOn() const override {
        cout << "Turning on the laptop (" << brand << ")..." << endl;
    }
};

// Derived class: Smartphone
class Smartphone : public Device {
private:
    string model;

public:
    Smartphone(const string& m) : model(m) {}

    void turnOn() const override {
        cout << "Turning on the smartphone (" << model << ")..." << endl;
    }
};

int main() {
    Device* devices[2];

    devices[0] = new Laptop("Macbook");
    devices[1] = new Smartphone("iPhone 14");

    for (int i = 0; i < 2; ++i) {
        devices[i]->turnOn();
        delete devices[i]; 
    }

    return 0;
}
