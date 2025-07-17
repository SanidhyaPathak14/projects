#include<iostream>
#include<string>
using namespace std;
class Library{
private:
   string libraryName;

protected:
   int totalBooks;

public:
//constructor defining.
   Library(string name,int books){  
      libraryName=name;
      totalBooks=books;
   }  
   
void showDetails(){
   cout<<"the name of library :"<<libraryName <<endl;
   cout<<"the total number of books is :"<<totalBooks<<endl;
}   
};
    
int main(){
   Library l1("central library",750);
   l1.showDetails();
}
