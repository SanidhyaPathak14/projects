#include<iostream>
#include<string>
using namespace std;

class University{
public:
string name;
string address;
long pinCode;

// making a constructor for calling a above details.
University(string n,string s,long p){
    name =n;
    address =s;
    pinCode=p;
}

void displayDetails(){
    
    cout<<"Name of university is :"<<name<<endl;
    cout<<"Address of university is :"<<address<<endl;
    cout<<"Pincode of university is :"<< pinCode<<endl;
}

};

int main(){
    University clg("iit bombay","ujjain road",453111);
    clg.displayDetails();
}
