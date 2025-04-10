#include<iostream>
#include<string>
using namespace std;

class animal{
public:
    void eat(){
        cout<<"this animal eats food "<<endl;
    }

    void sleep (){
        cout<<"this animal sleeps"<<endl;
    }
};

// now making a derived class dog

class dog : public animal{
public:
    void bark(){
        cout<<"the dog barks"<<endl;
    }
};

// now making a derived class cat
class cat :public animal {
public:
    void meow(){
        cout<<"the cat meows"<<endl;
    }
};

// now making a derived class bird
class bird : public animal {
public:
    void sing(){
        cout<<"the bird sing the song "<<endl;
    }
};

int main (){

dog d;
cat c;
bird b;

cout<<"------DOG-----"<<endl;

d.eat();
d.sleep();
d.bark();

cout << "\n--- Cat ---" << endl;
c.eat();
c.sleep();
c.meow();

cout << "\n--- Bird ---" << endl;
b.eat();
b.sleep();
b.sing();
}

