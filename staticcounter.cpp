#include<iostream>
#include<string>
using namespace std;

class counter {
private:
 static int a;

 public:
 // constructor for counting number of counter can be created

counter (){
    a++;
    cout<<"object"<<a<<"is created\n";
}
};


int counter:: a=0;

int main (){
counter a;
counter b;
counter aa[6];

}


