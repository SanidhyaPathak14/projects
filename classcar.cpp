#include<iostream>
#include<string>
using namespace std;

class car{
public :
   string make;
   string model;
   int year;

public:
// define a constructor 
car (string mak,string mod,int y){
make =mak;
model =mod;
year =y;
}

void display(){

   cout<<"here's the details of your class "<<endl;
   
cout<<"company of car is :"<<make<<endl;
cout <<"model of the car is : "<<model<<endl;
cout<<"year is :"<<year<<endl;

}
};

int main (){
   car myCar("Toyota","fortuner",2020);
   myCar.display ();

   car myCar2("mercedes","G-Wagon",2000);
   myCar2.display();
}
