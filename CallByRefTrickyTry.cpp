#include<iostream>
using namespace std;
int &ref(int &x)
{
  return (x);
}
int main() {

int a = 10, b;

b = ref(a);

cout << "a = " << a << " and b = "

<< b << endl;

ref(a) = 3; // Changes

// reference

//function can be on the Lvalue as well;

cout << "a = " << a;

return 0;
}
