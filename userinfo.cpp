#include <iostream>
#include <iomanip>  // For setting the output format

using namespace std;

int main() {
    string name;
    int age;
    double salary;

    
    cout << "Enter your name: ";
    getline(cin, name);  

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your salary: ";
    cin >> salary;

    
    cout << "\n----- User Information -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    
    cout << fixed << setprecision(2);  
    cout << "Salary: $" << salary << endl;

    return 0;
}
