#include<iostream>
#include<string>
using namespace std;

class bankAccount {
private:
string accountNumber;
double balance;


public:
bankAccount (string accNum,double initialBalance){

accountNumber =accNum;
balance=initialBalance;
}

// for deposit method
void deposit (double amount){
if (amount>0){
    balance =balance+amount;
    cout<<"deposited"<<amount<<endl<<"|newbalance:"<<balance<<endl;
}

else {
    cout<<"invalid deposit amount "<<endl;
}
}

// for withdraw method
void withdraw (double amount){
    if (amount>0&&amount<=balance){
        balance = balance-amount;
        cout<<"withdrawl amount :"<<amount <<endl<<"new | balance "<<balance<<endl;
    }

    else {
        cout<<"invalid withdwarl amount :"<<endl;
    }

}

void display (){
cout<<"account number :"<<accountNumber<<"|balance :"<<balance<<endl;
}
};

int main (){
bankAccount account ("12345678", 850000.00);
account.display();
account.deposit(500.00);
account.withdraw (200.00);
account.withdraw(500.00);
account.display();





}