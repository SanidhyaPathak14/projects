#include<iostream>
#include<string>
using namespace std;

class vehicle{
   public:
   virtual void describe ()=0;

};

class car : public vehicle{
   public:

   void describe () override{
      cout<<"this is A car :"<<endl;
   }
   };

class bike : public vehicle{
   public:
   void describe () override {
      cout<<"this is a bike"<<endl;
   }
};   

int main (){
   car c1;
   bike b1;
   c1.describe();
   b1.describe();
}