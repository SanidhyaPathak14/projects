#include<iostream>
#include<string>
using namespace std;

class employee {
public :

string name ;
string position;
double salary;


// define our own constructor 
employee (string n,string p,double s){
    name =n;
    position = p;
    salary =s;
}

void displayDetails (){
    cout<<"employee name is :"<<name <<endl;
    cout<<"employee position is :"<<position <<endl;
    cout <<"employee salary is : "<<salary <<endl;
}
};

int main(){
employee emp("Sanidhya pathak","HR",100000.00);
emp.displayDetails();


}