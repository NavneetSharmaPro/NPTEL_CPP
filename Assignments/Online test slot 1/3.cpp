#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string Name;
    double salary;
    Employee(string fName, double sal) : Name(fName), salary(sal) {}
    void show() {
        cout << Name << " " << salary;
    }
    void addBonus(double bonus) {
        salary += bonus;
    }
};
class Manager :public Employee {
public:
    Manager(string fName, double sal) : Employee(fName, sal) {}
};

class Clerk :public Employee {
public:
    Clerk(string fName, double sal) : Employee(fName, sal) {}
};

void congratulate(Employee* emp) {
    emp->addBonus(200);
    emp->show();
    cout << " ";
};

int main() {
    Employee* emp;
    int sal_m, sal_c;
    cin >> sal_c >> sal_m;
    Manager m1("Steve", sal_m);
    Clerk c1("Kevin", sal_c);
    // Call the proper function/s to congratulate the Manager and the Clerk
    emp=&c1;
    congratulate(emp);
      emp=&m1;
    congratulate(emp);

        return 0;
    }
