#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;  
    int age;      

public:
    // Setter (which sets the value of private class)

    void setName(string n) {
        name = n;
    }

    // Getter (which gets the value of private class)

    string getName() {
        return name;
    }

    // Setter method for age
    void setAge(int a) {
        age = a;
    }

    // Getter method for age
    int getAge() {
        return age;
    }
};

int main() {
    // in main function we can access the things of our class
    Person person;

    // class me uska naam , age wagehra rahegi 
    person.setName("Dr.Sanidhya Pathak ");
    person.setAge(18);

    
    cout << "Name: " << person.getName() << endl;  // Output: sanidhhya pathak
    cout << "Age: " << person.getAge() << endl;    // Output: 18

    return 0;
}


