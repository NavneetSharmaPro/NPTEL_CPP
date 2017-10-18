#include<iostream>
#include<string>
using namespace std;
// Define Swap() function here
template <class T>
  T Swap(T &a, T &b)
	{
  		T temp;
  		temp=a;
  		a=b;
  		b=temp;
	}
  int main() {
      int a, b;
      double s, t;
      string mr, ms;
      cin >> a >> b >> s >> t ;
      cin >> mr >> ms ;

      Swap(a, b);
      Swap(s, t);
      swap(mr, ms);

      cout << a << " " << b << " ";
      cout << s << " " << t << " ";
      cout << mr << " " << ms ;
      return 0;
  }
