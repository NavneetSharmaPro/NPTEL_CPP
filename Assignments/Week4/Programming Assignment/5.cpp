#include<iostream>
using namespace std;
class MyClass {
    static int x;
    public:

    void get() { x++; }
    static int print(int y) { //Fill the blank with proper key words
            x = x - y;
            cout << " " << x << " ";
       }
    };
    int MyClass::x=1;  // Define static data member
    int main() {

       int x;

       cin >> x;
       MyClass:: print(x);
       MyClass o1;
       o1.get();
       o1.print(x);
       return 0;
    }
