#include<iostream>
using namespace std;

namespace navneet
{
  int someRandomFunction(int a)
  {
    return a;
  }
  int b=100;
  int p=1000;
}
namespace sharma
{
  int againRandom(int x)
  {
    return x;
  }
  int y=200;
  int p=2000;
}
using namespace navneet; //next lines will search for the corrosponding symbon in namespace navneet
//using namespace std;
using sharma::y; //will consider y as a sharma::y
using sharma::p;
int main()
{
  int q=90,w=80;
  cout<<navneet::someRandomFunction(q);
  cout<<endl<<someRandomFunction(w);
  cout<<endl<<navneet::b;
  cout<<endl<<b;
  cout<<endl<<y;
  cout<<endl<<sharma::y;
  //cout<<endl<<againRandom(q); //invalid as it is not declared in using namespace
  cout<<endl<<sharma::againRandom(q);
  //cout<<p; //shows error as there are two or more candidates available for p(ambigous) compiletime
  return 0;
}
