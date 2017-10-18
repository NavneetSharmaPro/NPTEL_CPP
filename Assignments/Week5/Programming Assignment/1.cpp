#include <iostream>
using namespace std;

class Shape {
protected:
    float l;
public:
    void getData(){ cin >> l; }
    virtual float calculateArea(){


        return l*l;
    }
};

class Circle : public Shape {
public:
    virtual float calculateArea(){
        return 3.14*l*l;
    }
};
int main()
{
    Shape * b;       //Base class pointer
    Circle d;     //Derived class object
    b = &d;
    b->getData();
    cout << b->calculateArea();

    return 0;
}
