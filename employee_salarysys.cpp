#include <iostream>
#include <string>

using namespace std;


class Employee {
public:
    virtual double calculateSalary() const = 0;       
    virtual void displayDetails() const = 0;          
    virtual ~Employee() {}                            
};

// Derived class: Manager
class Manager : public Employee {
private:
    string name;
    double baseSalary;
    double bonus;

public:
    Manager(const string& n, double base, double b)
        : name(n), baseSalary(base), bonus(b) {}

    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    void displayDetails() const override {
        cout << "Manager Name: " << name << endl;
        cout << "Base Salary: $" << baseSalary << endl;
        cout << "Bonus: $" << bonus << endl;
        cout << "Total Salary: $" << calculateSalary() << endl;
        cout << "--------------------------" << endl;
    }
};

// Derived class: Engineer
class Engineer : public Employee {
private:
    string name;
    double hourlyRate;
    int hoursWorked;

public:
    Engineer(const string& n, double rate, int hours)
        : name(n), hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }

    void displayDetails() const override {
        cout << "Engineer Name: " << name << endl;
        cout << "Hourly Rate: $" << hourlyRate << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Total Salary: $" << calculateSalary() << endl;
        cout << "--------------------------" << endl;
    }
};


int main() {
    Employee* employees[2];

    employees[0] = new Manager("Alex carry", 5000.0, 1200.0);
    employees[1] = new Engineer("Sanidhya Pathak", 40.0, 160);

    for (int i = 0; i < 2; ++i) {
        employees[i]->displayDetails();
        delete employees[i]; 
    }

    return 0;
}
