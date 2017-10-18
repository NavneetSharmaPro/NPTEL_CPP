#include <iostream>
using namespace std;
int main(){
    int d;
    int *p=new int;  // Declare variable 'p' and use operator new to
                         // allocate memory to it

    cin >> d ;
    *p = d ;
    cout << ++*p + d++;

    delete(p); // Release the memory allocated above

    return 0;
}
