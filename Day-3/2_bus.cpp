#include <iostream>
using namespace std;

class bus{
    public:
        string route;
        int capacity;
};

int main() {
    bus b1;
    b1.route = "route 24";
    b1.capacity = 30;
    cout << "Route : " << b1.route << endl;
    cout << "Capacity : " << b1.capacity << endl;
      
    return 0;
}