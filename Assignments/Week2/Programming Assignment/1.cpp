#include <iostream>
using namespace std;

int& Ref_func(int &param) //Cheated from forum
{
  return (++param);
}
int main()
{
 int x, y, z;
 cin >> x ;//8
 cin >> z ;//-9
 y = Ref_func(x);
 cout << x  << " "<< y << endl; //9 9
 Ref_func(x)=z;
 cout << x  << " "<< y;// -9 9
 return 0;
}
