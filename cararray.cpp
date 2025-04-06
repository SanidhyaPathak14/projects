#include <iostream>
#include <string>
using namespace std;


class Car {
public:
    string make;
    string model;
    int year;
    string color;

    // Constructor 
    Car(string m, string mod, int y, string c) {
        make = m;
        model = mod;
        year = y;
        color = c;
    }

    
    void displayDetails() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    // Create an array for car
    Car cars[] = {
        Car("Toyota", "Fortuner", 2021, "white"),
        Car("Honda", "City", 2022, "black"),
        Car("Ford", "Endeavour", 2018, "Black"),
        Car("Tata", "Harrier", 2019, "White")
    };


    int numCars = sizeof(cars) / sizeof(cars[0]);


    for (int i = 0; i < numCars; i++) {
        cout << "Car " << (i + 1) << " Details: " << endl;
        cars[i].displayDetails();
    }

    return 0;
}
