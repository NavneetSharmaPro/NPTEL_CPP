#include<iostream>
using namespace std;
class test {
  int x_;
  int y_;
  public:
    void print()
    {
      cout<<x_<<" "<<y_;
    }
    void setx(int m_)
    {
      x_=m_;
    }
    void sety(int n_)
    {
      y_=n_;
    }
    int calc1(int n_)
    {
      int t;
      t=n_*x_*y_;
      x_=n_*3;
      return t;
    }
    void calc2(int n_)
    {
      int t;
      t=n_*x_;
      cout<<t;
    }
};
