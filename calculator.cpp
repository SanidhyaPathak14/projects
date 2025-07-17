#include<iostream>
using namespace std;

int main(){
    int result,number1,number2;
    char O;

    cout<<"Operator =  ";
    cin>>O;
    

    cout<<"number 1"<<endl;
    cin>>number1;

    cout<<"number 2"<<endl;
    cin>>number2;

    if (O =='+'){
        cout<<"you choose addition"<<endl;
        result=number1 + number2;
        cout<<"the result is :"<<result;
    }

    else if (O =='-')  {
        cout<<"you choose subtraction"<<endl;
        result =number1 - number2;
        cout<<"the result is "<<result;
    }

    else if(O =='*'){
        cout<<"you choose multiplication "<<endl;
        result=number1 * number2;
        cout<<"the result is "<<result;
    }

    else if (O == '/'){
        cout<<"you choose division "<<endl;
        result=number1/number2;
        cout<<"the result is "<<result;
    }

    else{
        cout<<"error";
    }

return 0;
}
