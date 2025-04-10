#include<iostream>
#include<string>
using namespace std;

class book{
private:    
    string authorName;
    string bookTittle;
    double price;

public:
// defining a parameterised constructor for class book.

    book(string name,string tittle,double p){
        authorName=name;
        bookTittle= tittle;
        price=p;
    }
    
void displayDetails(){
    cout<<"auhtor name is :"<<authorName<<endl;
    cout<<"tittle of book is: "<<bookTittle<<endl;
}
};

int main (){
    book b1("Chetan bhagat", "A Millionaire ",250);
    b1.displayDetails();
}