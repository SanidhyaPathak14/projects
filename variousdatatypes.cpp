#include <iostream>
#include <string>

using namespace std;

int main() {
   
    int age;
    float height;
    double weight;
    char grade;
    bool isStudent;
    string name;

    
    cout << "Enter your name: ";
    getline(cin, name); // To allow spaces in name

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in meters (e.g., 1.75): ";
    cin >> height;

    cout << "Enter your weight in kg (e.g., 70.5): ";
    cin >> weight;

    cout << "Enter your grade (A/B/C/etc.): ";
    cin >> grade;

    cout << "Are you a student? (1 for Yes, 0 for No): ";
    cin >> isStudent;

    
    cout << "\n----- User Details -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student Status: " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}
