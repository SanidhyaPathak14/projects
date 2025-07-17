#include<iostream>
#include<string>
using namespace std;

class payment{
public:

virtual void process(double amount){
    cout<<"The amount is in process";
}
};

class creditCard: public payment{
public:

void process(double amount )override {
    cout<<"processing credit card payment"<<endl;
}
};


class cash : public payment{
public:

void process(double amount )override{
    cout<<"processing cash payment "<<endl;
}
};


int main (){
    creditCard cred;
    cash cashpay;

    payment * payment1=&cred;
    payment * payment2=&cashpay;

    payment1-> process(100.00);
    payment2-> process(50.00);
}




