#include <iostream>
using namespace std;

int main() {
    int *a1 = new int; // memory allocation
    *a1 = 10;
    cout << "The value in a1 : " << *a1 << endl;
    cout << a1 << endl; // pointer (address)
    cout << &a1 << endl; // address of pointer
    delete a1; // memory deallocation
      
    return 0;
}