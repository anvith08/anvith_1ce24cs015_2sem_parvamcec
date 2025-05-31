#include <iostream>
using namespace std;

class student{
    string name;
    int roll_no;

    public:

    void input(){
        cout << "Enter name : \n";
        cin >> name;
        cout << "Enter roll number : \n";
        cin >> roll_no;
    }

    void display(){
        cout << "Student Details : \n";
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << roll_no << endl;
    }
};

int main() {
    student students[3];
    for (int i = 0; i < 3; i++)
    {
        students[i].input();
        students[i].display();
    }
    
    return 0;
}