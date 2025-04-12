#include<iostream>
#include<string>
using namespace std;
class math{
public:

static int add(int a,int b){
    return a+b;
}

static int sub(int a, int b){
    return a-b;
}

static int multiply(int a,int b){
    return a*b;
}

static double divide (int a,int b){
    return a/b;
}
};

int main(){

cout <<"addition is "<< math::add(10,5)<<endl;
cout <<"subtraction  is "<< math::sub(10,5)<<endl;
cout <<"multiplication is : "<< math::multiply(10,5)<<endl;
cout <<"division is : "<< math::divide(10,5)<<endl;

}

