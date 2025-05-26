#include <iostream>
using namespace std;

class Employee{
    protected:
    string name;
    int w_hour;

    public:
    Employee(string name, int w_hour) : name(name) , w_hour(w_hour){
    }

    void display(){
        cout << "Employee : "<< name << endl;
        cout << "Working Hours : " << w_hour << endl;
    }
};

class Person : public Employee{
    int weight;

    public:
    Person(string name, int w_hour, int weight) : Employee(name, w_hour), weight(weight){
        cout << "Person Constructor\n";
    }

    void display(){
        cout << "Employee : "<< name << endl;
        cout << "Working Hours : " << w_hour << endl;
        cout << "Weight : " << weight << endl;
    }
};


int main() {
    Employee e1("Test", 12);
    Person p1("A", 6, 86);
    e1.display();
    cout << "------\n";
    p1.display();

    return 0;
}
