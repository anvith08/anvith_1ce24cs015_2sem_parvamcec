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
    int size;
    cout << "Enter number of students : " << endl;
    cin >> size;
    student *students = new student[size];
    for (int i = 0; i < size; i++)
    {
        students[i].input();
        students[i].display();
    }
    
    delete[] students;
    return 0;
}