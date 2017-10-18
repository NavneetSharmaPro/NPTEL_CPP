//Cheated

#include <iostream>
using namespace std;
class MyClass {
    int mem_;

/*_____________ int x_ ;
    public:
    MyClass(int m, int mm) : mem_(m), x_(mm) {}
    int getMem() const { return mem_; }
    void setMem(int i) { mem_ = i; }
    int getxMem() ________ { return x_; }
    void setxMem(int i) __________ { x_ = i; }
};*/

mutable int x_ ;
    public:
    MyClass(int m, int mm) : mem_(m), x_(mm) {}
    int getMem() const { return mem_; }
    void setMem(int i) { mem_ = i; }
    int getxMem() const { return x_; }
    void setxMem(int i) const { x_ = i; }
};



int main() {

   int x, y,z;

   cin >> x;

   cin >> y;

   cin >> z;
   const MyClass myConstObj(x, y);
   myConstObj.setxMem(z);
   cout << myConstObj.getxMem() << endl;
   return 0;
}
