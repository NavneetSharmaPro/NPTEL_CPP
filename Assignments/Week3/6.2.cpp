
//Now if we make some changes to the class as given belowl

//PROGRAM 2 // Updated Implementation of class Test
#include<iostream>
using namespace std;
class Test {
int x_ [2] ;
int y_;
public:
void print() { cout << x_[0] << " " << y_; }
void setX(int m_) { x_[0]=m_; x_[1] = 0; }
void setY(int n_) { y_ = n_; }
int calc1(int n_)
{
int t;
t=n_*x_[0]*y_;
x_[0]=n_*5;
return t;
}
void calc2(int n_) {
int t;

t = n_ * x_[0];
cout << t;
}
};

int main() { // Application section
Test t;
t.setX(5);
}
