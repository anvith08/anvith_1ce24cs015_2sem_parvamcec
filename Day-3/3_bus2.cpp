#include <iostream>
using namespace std;

class bus{
    public:
        string route;
        int capacity;

        bus(string _route, int _capacity){
            cout << "Contstuctor is called automatically" << endl;
            this -> route = _route;
            this -> capacity = _capacity;
        }

        void display(){
            cout << "Route : " << route << endl;
            cout << "Capacity : " << capacity << endl;
        }
};

int main() {
    bus b1("route 32", 45);
    b1.display();
    
    return 0;
}