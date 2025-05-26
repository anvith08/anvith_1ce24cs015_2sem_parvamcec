#include <iostream>
using namespace std;

class camera{
    protected:
    int res;

    public:
    camera(int res) : res(res){
        cout << "Camera Constructor\n";
    }

    void dis_cam(){
        cout << "Resolution : " << res << endl;
    }
};

class phone{
    long ph_no;

    public:
    phone(long ph_no) : ph_no(ph_no){
        cout << "Phone Constructor\n";
    }

    void  dis_phone(){
        cout << "Phone Number : " << ph_no << endl;
    }
};

class smartphone : public phone, public camera {
    int net_speed;

    public:
    smartphone(int res, long ph_no, int net_speed) : camera(res), phone(ph_no), net_speed(net_speed){
        cout << "Smartphone Constructor\n";
    }

    void display(){
        cout << "Smartphone details : \n";
        dis_cam();
        dis_phone();
        cout << "Network Speed : " << net_speed << endl;
        
    }
};

int main() {
    smartphone s1(1080, 124545839, 500);
    s1.display();
      
    return 0;
}