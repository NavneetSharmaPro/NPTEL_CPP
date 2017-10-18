//Cheated
#include <iostream>
#include <cmath>
using namespace std;
class Complex { private: double re_, im_;
     public:
     Complex(double re=0,double im=0): re_(re), im_(im)
         { cout << "Ctor: (" << re_ << ", " << im_ << ")" << endl; }
         ~Complex()
                 { cout << "Dtor: (" << re_ << ", " << im_ << ")" << endl; }

             void print() { cout << "|" << re_ << "+j" << im_ << "| " << endl; }
        };
        Complex c(7.2, 4);
        int main() {
             cout << "main" << endl;
             double x, y;

             cin >> x;

             cin >> y;
             Complex d(x); Complex e;
             c.print();
             d.print();
             return 0;
        }	
