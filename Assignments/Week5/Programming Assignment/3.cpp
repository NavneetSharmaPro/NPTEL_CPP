#include<iostream>
using namespace std;

class Polygon {
protected: int width, height;
public:
    Polygon(int a, int b) : width(a), height(b) {}

    // Declare the area function here
        virtual int area()=0;
    void printarea() { cout << this->area() << ":"; }
    };
    class Rectangle : public Polygon {
    public:
        Rectangle(int a, int b) : Polygon(a, b) {}
        int area() { return width*height; }
    };

    class Triangle : public Polygon {
    public:
        Triangle(int a, int b) : Polygon(a, b) {}
        int area() { return width*height / 2; }
    };

    int main() {
        int h, w;
        cin >> h >> w;

        // Declare ppoly1 and ppoly2 as "pointer to Polygon" and dynamically allocate
        // a Rectangle and a Triangle objects respectively held by these pointers
        Polygon *ppoly1=new Rectangle(h,w); // Rectangle object of h and w
        Polygon *ppoly2=new Triangle(h,w); // Triangle object of h and w

        ppoly1->printarea(); // For Rectangle object
        ppoly2->printarea(); // For Triangle object

        delete ppoly1;
        delete ppoly2;

        return 0;
    }
    
