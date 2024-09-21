#include <iostream>
using namespace std;

class Base {
  public :
  virtual void print (){
    cout << "Base function:"<< endl;
  }
};

class Derived : public Base{
  public :
  void print (){
    cout << "Derived Function"<< endl;
  }
};

int main (){
  Derived derived1;
  
  //call perint()function of derived class 
  derived1.print();
  
  return 0;
}