#include <iostream>
using namespace std;

int fun(int &x) //case 1
{
  return (x);
}

/*int &fun(int &x) //case 2
{
  return (x);
}*/

int main()
{
  int a=5;
  //int b=fun(a); //case 2
  const int &b=fun(a); //case 1 needs const as: const int &ref=nonconst
  cout<<b<<endl;
  return 0;
}
