#include <iostream>
using namespace std;

class A { protected: int ai;

public:
    A(int i) : ai(i) {}
    virtual void f() = 0;
     void g()
    { ++ai; }
};
class B : public A { protected: int bi;
public:
    B(int i) : A(i), bi(i) {}
     void f()
    { cout << ai << bi; }       // DO NOT EDIT THIS LINE
     void g()
    { A::g(); }
};
class C : public B { int ci;
public:
    C(int i) : B(i), ci(i) {}
     void f()
    { cout << ai << bi << ci; } // DO NOT EDIT THIS LINE
     void g()
    { B::g(); }
};
int main() {
    int x = 3 ;
    int y;
    cin >> y;

    A *p[] = { new B(x), new C(y) };
    for(int i = 0; i < sizeof(p) / sizeof(A*); ++i)
        { p[i]->g(); p[i]->f(); }
    return 0;
}
