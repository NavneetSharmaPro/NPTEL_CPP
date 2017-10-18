


#include<iostream>
using namespace std;

class MyClass {
public:
    static int count;

    MyClass(){ count++; }



    #include<iostream>
    using namespace std;

    class MyClass {
    public:
        static int count;

        MyClass(){ count++; }
        int MyClass::count = 1;

        int main() {
            cin >> MyClass::count;

            MyClass *pt;
            pt = new MyClass[2];

            delete[] pt;

            return 0;
        }
