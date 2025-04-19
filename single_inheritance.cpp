#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

// making a constructor for person

Person(string name,int age){
this->name=name;         // here we use this pointer
this->age=age;           // here we use this pointer

}

void showOutput(){
    cout<<"name of the student is :"<<name<<endl;
    cout<<"age if the student is :"<<age<<endl;
}


};


class Employee: public Person{
   private:
   string designation;
   double salary;

public:
   // Constructor
   Employee(string n, int a, string d, double s)
       : Person(n, a) { // this line is used for call the the details of above class
       designation = d;
       salary = s;
   }

   
   void displayEmployeeInfo() {
       showOutput();  // Call base class function
       cout << "Designation: " << designation << endl;
       cout << "Salary: $" << salary << endl;
   }
}; 

int main (){
    Employee emp("Mr.Sanidhya Pathak",24,"Sotware Engineer",85000.00);
    emp.displayEmployeeInfo();
}



