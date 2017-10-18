#include <iostream>
using namespace std;

class A {
    int i;
public:
    A(int ai) : i(ai) {}
    int get() const { return i; }
    void update() { ++i; }
};

class B {
    int i;
public:
    B(int ai) : i(ai) {}
    int get() const { return i; }
    B(const A& r)// Fill the blanks with proper
      {
        i=r.get();// conversion operator or Constructor
      }
  	operator A()
      {
        return A(i);
      }
      B(const A& r)// Fill the blanks with proper
        {
          i=r.get();// conversion operator or Constructor
        }
    	operator A()
        {
          return A(i);
        }    
