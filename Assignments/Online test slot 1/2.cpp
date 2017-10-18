#include <iostream>
using namespace std;

class Engine {
public:
    Engine(int nc) :cylinder(nc){}

    void start() {
        cout << getCylinder() << " cylinder engine started" ;
    };

    int getCylinder() {
        return cylinder;
    }

private:
    int cylinder;
};
class Car : private Engine
{    // Car has-a Engine
public:
 // Define the constructor. Name of the parameter should be 'nc'
  Car(int nc):Engine(nc){}

    void start() {
        cout << "car with " << Engine::getCylinder() <<
            " cylinder engine started" << endl;

        Engine::start(); // Call the start function of Engine
    }
};
int main()
{
    int cylin;
    cin >> cylin;

    Car c(cylin);
    c.start();

    return 0;
}
