#include<iostream>
using namespace std;
int main()
{
  int a=5;
  int &ref=a; //must be initalized
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<ref<<endl;
  cout<<&ref<<endl; //diffrent from pointer as, pointer hasits own memory location an address and points to a variable location,
  //on the other hand reference provides an alias, i.e. if value of alias change, actual value changes too.
  //Demonstration:
  a=10;
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<ref<<endl;
  cout<<&ref<<endl;
  //let us try updating the reference
  ref=100;
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<ref<<endl;
  cout<<&ref<<endl;
  //Haha, funny.
  return 0;
}
