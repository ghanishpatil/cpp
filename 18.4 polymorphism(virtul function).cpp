#include <iostream>
using namespace std;

class Base {
  public:
  virtual void print(){
    cout << "base funtion" << endl;
  }
};

class Derived : public Base{
  public :
  void print(){
    cout << "Derived function" << endl;
  }
};

int main (){
  Derived derived1;
  
  //pointer of base type that points to derived1
  Base*base1 = &derived1;
  
  //calls memebr function of derived class 
  base1->print ();
  return 0;
}