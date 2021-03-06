#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;

  public:

   // Write the proper definition of getArea() function here
  	virtual int getArea()
      {

      }
      void setWidth(int w) { width = w; }
          void setHeight(int h) { height = h; }
      };
      class Rectangle : public Shape {
      public:
          int getArea() { return (width * height); }
      };
      class Triangle : public Shape {
      public:
          int getArea() { return (width * height) / 2; }
      };
      int main(void) {
          int x, y;
          cin >> y >> x;
          Rectangle Rect;
          Triangle  Tri;

          Rect.setWidth(x);
          Rect.setHeight(y);

          Tri.setWidth(x);
          Tri.setHeight(y);

          Shape *shape[] = { &Rect, &Tri, 0 };
          Shape **pShape = &shape[0];

          while (*pShape)
              cout << (*pShape++)->getArea() << " ";

          return 0;
      }
