#include<iostream>

using namespace std;

class MyClass { int x_;

    public:
    MyClass(int i) : x_(i) {}
    friend void display(const MyClass &a); // Declare the display function.

   }; // End of class

   void display(const MyClass &a) { // Fill the parameters

       cout << " " << a.x_;
   }
   int main(){

       int x;

       cin >> x;
       MyClass obj(x);
       display(obj);
       return 0;
   }
