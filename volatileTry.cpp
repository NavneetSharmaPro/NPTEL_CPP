#include<iostream>
using namespace std;
int main()
{
  int volatile a;
  while(a)
  {
    cout<<a; //Brilliant O/P :D
  }
  return 0;
}
