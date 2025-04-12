#include<iostream>
#include<string>
using namespace std;

class vehicle{
public:
    void speed(){
        cout<<"har car ki speed limit hoti hai"<<endl;
    }

   void company(){
    cout<<"har car ki apni company hoti hai "<<endl;;
   }
};



class car:public vehicle{
public: 
    void run (){
        cout<<"car is a four wheel vehicle"<<endl;;
    }
};

class bike :public vehicle {
public: 
    void functions (){
        cout<<"bike is a two wheel vehicle "<<endl;;
    }

};

int main (){
    car c;
    bike b;
cout<<"-----for car-----"<<endl;;
c.speed();
c.company();
c.run();


cout<<"-----for bike -----"<<endl;;
b.speed();
b.company();
b.functions();
}

