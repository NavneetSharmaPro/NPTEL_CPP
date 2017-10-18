#include <iostream>
using namespace std;
class B {
public:
    B() { cout << "98 "; } // don't modify the "cout"



    virtual ~B() { cout << "56 "; }  // Don't Edit/Modify the "cout"


};
class D : public B {
    int n;
public:
    D(int p):n(p) { cout << n << " "; }
    ~D() { cout << n*2 << " "; }
};

int main() {
    int n ; cin >> n ;

    B *basePtr = new D(n);

    delete basePtr;

    return 0;
}
