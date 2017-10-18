#include <iostream>
using namespace std;

class Area {
public:
    int area;
    int calc(int l, int b) { area = 4 *l*b; return area; }

};

class Perimeter {
public:
    int peri;
    int calc(int l, int b) {peri =  8 * (l + b); return peri; }
};

/* Rectangle class is derived from classes Area and Perimeter. */
class Rectangle: public Area, public Perimeter { // Inherit the required base classes

private:
    int length, breadth;
    int area() {
        /* Calls area_calc() of class Area and returns it. */
        return Area::calc(length,breadth);
    }

    int peri() {
        /* Calls peri_calc() function of class Perimeter and returns it. */
        return Perimeter::calc(length,breadth);
    }
  public:
      Rectangle(int l, int b) : length(l), breadth(b) {}
      int print() {
          cout << area() << " " << peri();
      }
  };

  int main() {
      int l, b;
      cin >> l >> b;

      Rectangle r(l, b);
      r.print();
      return 0;
  }
