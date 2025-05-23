#include <iostream>
using namespace std;

class BankAccount{
    public:
        string holder_name;
        int ac_no;

        // constructor overloading --> same constuctor 
        // 3 types of constructors:
            // default constructor
        BankAccount(){
            cout << "Default parameter" << endl;
            this -> holder_name = "Unknown";
            this -> ac_no = 0;
        }
        
        // all-agrs constructor
        BankAccount(string name, int ac_no){  
            cout << "Contstuctor is called automatically" << endl;
            this -> holder_name = name;
            this -> ac_no = ac_no;
        }
        
        void display(){
            cout << "Holder name : " << this -> holder_name << endl;
            cout << "Account number : " <<  ac_no << endl;
        }
};

int main() {
    BankAccount b1, b2("Test", 102);
    b1.display();
    b2.display();
    
    return 0;
}