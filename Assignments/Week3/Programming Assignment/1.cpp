#include <iostream>

using namespace std;

class Complex {

     public: double *re, *im;
     Complex(int r, int m)
     {

         re = new double(r);

         im = new double(m);

     }

   Complex(const Complex &t) //copy constructor BITCH!
     {
          //double *t=new double;
        //Complex t; //Naah!
        re = new double; im = new double;
        *re = *t.re; *im= *t.im;
      }
      ~Complex()
      {
          delete re, im;
      }

    };

    int main() {

        double x, y, z;

        cin >> x >> y >> z;  //4,5,6  //4,5,5
        Complex n1(x,y);
        cout << *n1.re << "+" << *n1.im << "i ";  //4+5i  //4+5i
        Complex n2 = n1;
        cout << *n2.re << "+" << *n2.im << "i ";  //4+5i  //4+5i
        *n1.im = z;
        cout << *n2.re << "+" << *n2.im << "i ";  //4+5i  //4+5i
        cout << *n1.re << "+" << *n1.im << "i ";  //4+6i  //4+5i
        return 0;
    }
