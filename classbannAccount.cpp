#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    public:
        string name;
        string type;
        int age;
        string branchName;
        long balance ;

// first constructor    
 BankAccount (string n,string type,int a){
    name =n;
    this ->type=type;
    age=a;
 }  
// second constructor
 BankAccount (string branchName,long b){
    this->branchName=branchName;
    balance=b;
 }

// showing details of first constructor
 void showDetails(){
    cout<<"account holder name :"<<name<<endl;
    cout<<"account type: "<<type<<endl;
    cout<<"holder's age :"<<age <<endl;
}

// showing details of second constructor
void showInfo(){
    cout<<"branch name is :"<<branchName<<endl;
    cout<<"balance available is :"<<balance<<endl;

}
    
};
    
int main(){
    BankAccount b1("Sanidhya Pathak","Current Account",24);
    BankAccount b2("Punjab National Bank",35000);

    b1.showDetails();
    b2.showInfo();
}
