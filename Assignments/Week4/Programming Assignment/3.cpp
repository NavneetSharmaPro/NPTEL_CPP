#include <iostream>
using namespace std;
class MyClass {
    int data;
  public:
  MyClass(int x):data(x){ }  // Define Constructor
  MyClass& operator++() {
      ++data;
      return *this;
  }
 MyClass operator++(int p) { //write the Appropriate Header of the function
 MyClass t(data);
     ++data;
     return t;
 }
 void disp() {
     cout << " " << data ;
 }
 };
 int main() {

     int x;

     cin >> x;
     MyClass obj1(x);
     obj1.disp();
     MyClass obj2 = obj1++;
     obj2.disp();
     obj2 = ++obj1;
     obj2.disp();
     return 0;
 }
