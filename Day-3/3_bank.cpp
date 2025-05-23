#include <iostream>
using namespace std;

class BankAccount{
    public:
        string holder_name;
        int ac_no;

        //  constructor -->  calls automatically when a function is called
                        // initialize values for objects
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
    BankAccount b1("Test", 102);
    b1.display();
    
    return 0;
}