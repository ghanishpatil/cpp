#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a; // creating a 'int' pointer 
    
    //* ---> pointer of operator
    // & ---> referance operator
    cout << b << endl;
    cout << &a << endl;
    
    cout << *b << endl; // using * to get the value of b with referance of a
    // * ---> value at
    // & ---> address of 
    
    return 0;
}
