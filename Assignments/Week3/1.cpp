#include<iostream>
using namespace std;
class test
{
  int x_;
  unsigned char std[8];
};
int main()
{
  test t;
  cout<<sizeof(t)<<" ";
  return 0;
}
