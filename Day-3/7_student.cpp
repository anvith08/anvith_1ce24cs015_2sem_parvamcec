#include <iostream>
using namespace std;

class Student{
    string name, class_name;
    int roll_no, marks;
    
    public:
        Student(string name, string class_name, int roll_no, int marks){
            this -> name = name;
            this -> class_name = class_name;
            this -> roll_no = roll_no;
            this -> marks = marks;
        }

        void display(){
            cout << "Name : " << name << endl;
            cout << "Class Name : " << class_name << endl;
            cout << "Roll No : " << roll_no << endl;
            cout << "Marks : " << marks << endl;
            if (marks > 90 && marks <= 100)
            {
                cout << "Grade : a+\n";
            }
            else if (marks > 80 && marks <= 90)
            {
                cout << "Grade : a\n";
            }
            else if (marks > 70 && marks <= 80)
            {
                cout << "Grade : b+\n";
            }
            else if (marks > 60 && marks <= 70)
            {
                cout << "Grade : b\n";
            }
            else if (marks > 50 && marks <= 60)
            {
                cout << "Grade : c+\n";

            }
            else{
                cout << "Grade : f\n";
            }
            
        }
};

int main() {
    Student s1("Test", "class 12", 12, 80);
    s1.display();   
      
    return 0;
}