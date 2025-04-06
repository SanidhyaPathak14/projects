#include<iostream>
#include<string>
using namespace std;

class bankAccount{
// this are called properties of the class
public :

string name;
string type;
int age;
string branchName;
long balance ;

// This are called methods / member function of the class 
void changebranch(string newBranch ){
  branchName =newBranch;

}
};

int main()
{   // the main fuction is used for object creation ..... 

// in our main function constructor is call always in first step...

bankAccount account1;// the first line in every code (for oops) is always a constructor call .
                            
account1.name ="Sanidhya Pathak";
account1.type ="current";
account1.age =18;
account1.branchName = "Punjab National Bank";
account1.balance = 5900000;

// cout<< account1.name <<endl <<account1.age << endl <<account1.branchName ; 

cout<< "owner name is : "<<account1.name <<endl;
cout<<"branch name is : "<<account1.branchName <<endl;
cout<<"current balance is :"<< account1.balance <<endl;

   return 0;
}