#include <iostream>
#include <string>
using namespace std;


int main() {
    int age;
    float marks;
    char gender;
    string name;
    
    cout << "Enter student age : " << endl;
    cin >> age;
    cout << "Enter marks : " << endl;
    cin >> marks;
    cout << "Enter student gender : " << endl;
    cin >> gender;
    cin.ignore(); 
    cout << "Enter student name : " << endl;
    // cin >> name;
    getline(cin, name);

    cout << "Student details: " << endl;
    cout << "Name:" << name << endl;
    cout << "Age:" << age << endl;
    cout << "Gender:" << gender << endl;
    cout << "Marks:" << marks << endl;

    return 0;
}