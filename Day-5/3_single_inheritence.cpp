#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    int weight;

    public:
    Person(string name, int age, int weight) : name(name), age(age), weight(weight) {
        cout << "Person Constructor" << endl;
    }
};

class Student : public Person{
    int r_no;

    public:
    Student(string name, int age, int weight, int r_no) : Person(name, age, weight), r_no(r_no) {
        cout << "Student constructor\n";
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
    Person p1("a",23, 87);
    s1.display();
      
    return 0;
}