#include<iostream>
using namespace std;

class base
{
public:
  pub()
  {
    cout<<"Public Access Provided"<<endl;
  }
protected:
  prot()
  {
    cout<<"Protected Access Provided"<<endl;
  }
private:
  priv()
  {
    cout<<"Private Access Provided"<<endl;
  }
};

class D_pub : public base
/*
public inheritance properties:
  inherits public as public
  inherits prootected as protected
  cannot inherit private
*/
{
  public:
    pub();
    prot();
    //priv();
};
class D_prot : protected base
{
/*
  public inheritance properties:
    inherits public as protected
    inherits protected as protected
    cannot inherit private
*/
  public:
    pub();
    prot();
    //priv();
};
class D_priv : private base
{
/*
  public inheritance properties:
    inherits public as private
    inherits protected as private
    cannot inherit private
*/
  public:
    pub();
    prot();
    priv();
};
int main()
{
  D_pub d1;
  D_prot d2;
  D_priv d3;

  d1.pub();
  d1.prot();
  //d1.priv();

  d2.pub();
  d2.prot();
  //d2.priv();

  d3.pub();
  d3.prot();
  //d3.priv();
  return 0;
}
