#include<iostream>
using namespace std;
class MyClass {
    int x_;
  public:
  MyClass(int i) : x_(i) {}
      friend void display(MyClass &a); // Declare the display function.
  };
  void display(MyClass &a) {
      cout << " " << a.x_;
  }
  int main(){

      int x;

      cin >> x;
      MyClass obj(x);
      display(obj);
      return 0;
  }
