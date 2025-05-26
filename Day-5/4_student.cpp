#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    int weight;

    public:
    Person(){
        cout << "Person Constructor" << endl;
    }
};

class Student : public Person{
    int r_no;

    public:
    Student(string name, int age, int weight, int r_no){
        cout << "Student constructor\n";
        this -> name = name;
        this -> age = age;
        this -> weight = weight;
        this -> r_no = r_no;
    }

    void display(){
        cout << "Student details : \n";
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Weight : " << weight << endl;
        cout << "Roll Number : " << r_no << endl;
    }
};

int main() {
    Student s1("Test", 16, 58, 34);
    s1.display();
      
    return 0;
}