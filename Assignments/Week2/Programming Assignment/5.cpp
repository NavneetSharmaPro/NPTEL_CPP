#include<iostream>
using namespace std;

int Area(int a) //Perfect Code at last!
{
  return a*10;
}
int Area(double a)
{
  int x=a;
  return x*10;
}
int Area(int a, int b)
{
  return a*b;
}
double Area(double a, double b)
{
  return a*b;
}

int main()
{
    int x ,y, t;
    double z, u, f;

    cin >> x >> y ;
    cin >> z >> u ;

    t = Area(x);
    cout << "Area =" << t <<endl;
    f = Area(z);
    cout << "Area =" << f << endl;
    f = Area(z,u);
    cout << "Area =" << f ;
    return 0;
}
