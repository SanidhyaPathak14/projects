#include<iostream>
#include<cmath>
using namespace std;

class shape{
public:

virtual double getArea()const{
    return 0.0;
}

virtual void displayArea()const {
    cout<<"area is :" <<getArea()<<endl;
}
};


class Circle:public shape{
private:
    double radius;

public:
Circle(double r){
    radius=r;
}

double getArea()const override {
    return M_PI * radius * radius;
}
};


class rectangle: public shape{
private:

double length ;
double breadth;

public:
rectangle(double l,double b){
    length =l;
    breadth =b;
}

double getArea() const override{
    return length * breadth;
}
};


int main(){

    Circle c(5.0);
    rectangle rect(4.0,6.0);

    shape * shape1=&c;
    shape * shape2=&rect;

    shape1->displayArea();
    shape2-> displayArea();



}

   

