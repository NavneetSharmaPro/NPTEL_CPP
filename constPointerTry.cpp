#include<iostream>
using namespace std;
int main()
{
  const int a=2;
  int b=10;
  const int *p=&a; //can change address, but not values //const->const, const->non->const works
  int const *x=&a;
  cout<<a<<endl;  //2
  cout<<&a<<endl; //0x69fef4
  cout<<p<<endl;  //0x69fef4
  cout<<*p<<endl; //2
  //*p=4;         //error: assignment of read only location

  p=&b;
  //p=&a;
  //(both statements works)

  cout<<a<<endl;  //2
  cout<<&a<<endl; //0x69fef4
  cout<<b<<endl;  //10
  cout<<&b<<endl; //0x69fef0
  cout<<p<<endl;  //0x69fef0
  cout<<*p<<endl; //10
  //*x=5;
  x=&b;
  b=20;
}
