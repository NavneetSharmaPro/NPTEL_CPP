#include<iostream>
using namespace std;
template <class T, class U=int> // Write the class header here
//template<>

class A  { // Don't Edit this Class
public:
	T x;
    U y;
    A() { cout << "called" << endl; }
    A(T x, U y){ cout << x << ' ' << y << endl; };
};

/*
template <>
class A<char>
{
  public:
  a(char x)
  {
    cout<<"called"<<endl;
  }
};*/
int main()  {
    int num1 = 0;
    double num2 = 0;
    char c;
    cin >> num1;
    cin >> num2;
    cin >> c;

    A<char> a;
    A<char, int> (c, num1);
    A<int, double> (num1, num2);
    return 0;
}
