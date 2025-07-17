#include<iostream>
using namespace std;

class shape{
public:
    virtual void draw(){
        cout<<"drawing a circle";
    }

};

class circle: public shape{
public:
    void draw () override {
        cout<<"circle bana raha hu ";
    }
};


int main()
{
    circle c1;
    c1.draw();
   return 0;
}