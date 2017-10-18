#include <iostream>
using namespace std;

class Base {
public:
    virtual void DoIt() = 0;    // pure virtual
    virtual ~Base() {};
};

class Foo : public Base {
public:
    virtual void DoIt() { cout << "12,"; };
    void FooIt() { cout << "13,"; }
};

class Bar : public Base {
public:
    virtual void DoIt() { cout << "14,"; }
    void BarIt() { cout << "15:"; }
};

Base* CreateRandom(int x) {
    if ((x % 2) == 0)
        return new Foo;
    else
        return new Bar;
}

int main() {
    int lim = 0;
    cin >> lim;
    for (int n = 0; n < lim; ++n) {

        Base* base = CreateRandom(n);
        base->DoIt();
        Bar* bar = dynamic_cast<Bar*>(base);
        Foo* foo = dynamic_cast<Foo*>(base);
        if (bar)
            bar->BarIt();

        if (foo)
            foo->FooIt();

    } // End for

    return 0;
} // end of main()
