// write a program for derived class .

#include<iostream>
#include<string>
using namespace std;

class sports {
public:
void fit (){
   cout<< "every sports required fitness "<<endl;
}

void diet(){
cout<<"take healthy diet" <<endl;
}

};

class cricket : public sports{
public:
   void boundary(){
      
      cout<<"hit the boundaries "<<endl;
   }
};

class football : public sports{
public:
   void goal(){
      cout<<"hit the goal  "<<endl;
   }
};


int main(){

   cricket c;
   football b;

   cout<<"-------for the sports cricket---------"<<endl;
   c.fit();
   c.diet();
   c.boundary();



   cout<<"------\nfor the sportfootball-------- "<<endl;
   b.fit();
   b.diet();
   b.goal();

} 