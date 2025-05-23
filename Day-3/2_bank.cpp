#include <iostream>
using namespace std;

class BankAccount{
    public:
        string holder_name;
        int ac_no;

        //  constructor -->  calls automatically when a function is called
                        // initialize values for objects
        BankAccount(){  
            cout << "Contstuctor is called automatically" << endl;
        }
};

int main() {
    BankAccount b1;
    b1.holder_name = "Test";
    b1.ac_no = 101;
    cout << "Holder name : " << b1.holder_name << endl;
    cout << "Account number : " << b1.ac_no << endl;
    
    return 0;
}