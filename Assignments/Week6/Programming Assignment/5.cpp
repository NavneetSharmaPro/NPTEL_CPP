#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0) {
        width = a;
        height = b;
    }

    virtual void area() { // Fill the blank
           cout << "Parent class area :" << endl;
       }
   };

   class Rectangle : public Shape {
   public:
       Rectangle(int a = 0, int b = 0) :Shape(a, b) { }
       void area() {
           cout << (width * height) << " ";
       }
   };

   class Triangle : public Shape{
   public:
       Triangle(int a = 0, int b = 0) :Shape(a, b) { }
       void area() {
           cout << (width * height / 2);
       }
   };

   // Main function for the program
   int main() {
       int a, b;
       cin >> a;
       cin >> b;
       Shape *shape;
       Rectangle rec(a, b);
       Triangle  tri(a, b);


       // Write the code to call rectangle area.
       shape=&rec;
       shape->area();

       // Write the code to call triangle area.
       shape=&tri;
       shape->area();

       return 0;
   }
