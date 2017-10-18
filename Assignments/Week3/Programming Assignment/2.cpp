//Cheated
#include <iostream>
using namespace std;
class Sample {
    public:
    int data_, graph_;
    char data_or_graph_;
    Sample(int dt=5,char dgt='B'):data_(dt),data_or_graph_(dgt) // Fill blank and complete the constructor definition
    {


      graph_=6;
      cout << data_ <<  " " << data_or_graph_<< " " << graph_ <<endl;
         } // End of constructor definition
      }; // End of class

      int main() {
          int x; char y;

          cin>>x >> y ;

          Sample s1(x,y), s2(--x, ++y), s3;


          return 0;
      }
