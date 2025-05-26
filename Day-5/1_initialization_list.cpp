#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int r_no;

    public:
    Student(string n, int roll) : name(n), r_no(roll){
        cout << "Constructor is called\n";
    }

    void display(){
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << r_no << endl;
    }
};


int main() {
    Student s1("Test", 9);
    s1.display();
    return 0;
}