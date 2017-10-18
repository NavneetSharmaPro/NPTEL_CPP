#include<iostream>

using namespace std;

class Sample
{
int x;
int y;
public:
void setX(int n) { x = n; }
void setY(int m) { y = m; }
int getY() { return y; }
int getX() { return x; }
};

class Experiment
{
public:
display(Sample t)
{
  t.setX(8);
  cout<<t.x;
}
};

int main() {
Sample t;
Experiment e;
e.display(t);
}
