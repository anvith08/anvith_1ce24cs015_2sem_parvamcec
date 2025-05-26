#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    int weight;

    public:

    Person(string name, int age, int weight) : name(name), age(age), weight(weight) {
        cout << "Person Constructor\n";
    }

    ~Person(){
        cout << "Person is called\n";
    }

};

class Employee : public Person{
    protected:
    int emp_id;

    public:

    Employee(string name, int age, int weight, int emp_id) : Person(name, age, weight), emp_id(emp_id) {
        cout << "Employee Constructor\n";
    }
    ~Employee(){
        cout << "Employee is called\n";
    }
};

class Manager : public Employee{
    int salary;

    public:

    Manager(string name, int age, int weight, int emp_id, int salary) : Employee(name, age, weight, emp_id), salary(salary) {
        cout << "Manager Constructor\n";
    }

    void display(){
        cout << "Manager details : \n";
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Weight : " << weight << endl;
        cout << "Employee ID : " << emp_id << endl;
        cout << "Salary : " << salary << endl;
    }

    ~Manager(){
        cout << "Manager is called\n";
    }
};

int main() {
    Manager m1("Test", 28, 76, 104, 90800);
    m1.display();
      
    return 0;
}