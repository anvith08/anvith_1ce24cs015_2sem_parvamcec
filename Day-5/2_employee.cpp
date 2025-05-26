#include <iostream>
using namespace std;

class Employee{
    private:
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

int main() {
    Employee e1("Test", 12);
    e1.display();
      
    return 0;
}
