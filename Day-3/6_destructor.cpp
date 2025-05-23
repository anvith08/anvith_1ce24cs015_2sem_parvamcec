#include <iostream>
using namespace std;

class Parent{
    public:
        string name;

    Parent(string name){
        cout << "constructor call\n";
        this -> name = name;
    }

    void display(){
        cout << "Name of parent : " << name << endl;
    }

    // destructor --> method that'll be called automatically once the object is destroyed
                   // name starts with ~, but should be same as class name
    
    ~Parent(){
        cout << "Destructor is called\n";
    }

};

int main() {
    Parent p1("Test");
    p1.display();

    return 0;
}