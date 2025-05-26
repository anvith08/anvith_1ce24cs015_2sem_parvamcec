#include <iostream>
using namespace std;

class person{
    string name;
    int age;

    public:
    person(string name, int age) : name(name), age(age){
    }

    void display_person(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class student : public person{
    int r_no;
    
    public:
    student(string name, int age, int r_no) : person(name, age), r_no(r_no){
    }

    void display_student(){
        cout << "Student details : \n";
        display_person();
        cout << "Roll Number : " << r_no << endl;
    }

};

class teacher : public person{
    int salary;

    public:
    teacher(string name, int age, int salary) : person(name, age), salary(salary){
    }

    void display_teacher(){
        cout << "Teachers details : \n";
        display_person();
        cout << "Salary : " << salary << endl;
    }
};

int main() {
    student s1("A", 16, 101);
    teacher t1("B", 32, 30000);
    s1.display_student();
    t1.display_teacher();    
      
    return 0;
}