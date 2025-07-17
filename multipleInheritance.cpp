#include<iostream>q
using namespace std;

class vehicle{
public:
   string companyName;
   string carName;
   
};

class car: public vehicle{
public:

string carType;
};


class ElectricCar:public car{
public:

string batteryHealth;


void showDetails(){

cout<<"company name: "<<companyName<<endl;
cout<<"car name : "<<carName<<endl;
cout<<"car type :"<<carType<<endl;
cout<<"battery health : "<<batteryHealth<<endl;


}
};


int main (){
    ElectricCar e5;
    e5 .companyName="tata";
    e5. carName="harrier";
    e5.carType = "cidan";
    e5.batteryHealth="good";

    e5.showDetails();

}












