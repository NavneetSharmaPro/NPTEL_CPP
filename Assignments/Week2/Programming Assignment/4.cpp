#include <iostream>
using namespace std;
int main(){
    int d;
    int *p=new int(); // use operator new to allocate memory to variable 'p'

       cin>> d ;//-7
       *p = d ;
       cout << ++*p + d++ * (++*p + *p);//-6 + -6 * (-4 + -4)
       operator delete(&p); // Cheated from forum
       return 0;
   }
