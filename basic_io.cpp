#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;

    
    cout << "Enter your name: ";
    getline(cin, name); // Read full name including spaces

    cout << "Enter your age: ";
    cin >> age;

    
    cout << "\nHello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}
