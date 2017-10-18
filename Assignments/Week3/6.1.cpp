#include<iostream>

using namespace std;

class Test {

int x_;
int y_;
public:
void print() { cout << x_ << " " << y_; }
void setX(int m_) { x_ = m_;}
void setY(int n_) { y_ = n_;}
int calc1(int n_)
{
int t;
t = n_ * x_ * y_;
x_ = n_ * 5;
return t;
}
void calc2(int n_) {
int t;
t = n_ * x_;
cout << t;
}
};
int main() { // Application section
Test t;
t.setX(5);

}
