#include <iostream>
using namespace std;

class student {

private:
    int roll;

public:
    student(int r) :roll(r) {}
    void fun() const {

            (const_cast<student*>(this))->roll = 5;

        }
        int getRoll()  { return roll; }

        }; // end of class student

        int main(void) {
            int old_roll_no = 0;
            cin >> old_roll_no;
            student s(old_roll_no);
            cout << s.getRoll() << " ";
            s.fun();
            cout << s.getRoll() ;

            return 0;
        }
