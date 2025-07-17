#include <iostream>
using namespace std;

class Shape
{
public:
   virtual void draw()
   {
      cout << "drawing a shape :";
   }
};

class Circle : public Shape
{
public:
   void draw()
   {
      cout << "Draw a circle." << endl;
   }
};
class Rectangle : public Shape
{
public:
   void draw()
   {
      cout << "Draw a Rectangle." << endl;
   }
};
int main()
{
   Circle c;
   Rectangle r;
   c.draw();
   r.draw();
   return 0;
   
}