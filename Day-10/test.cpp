#include <iostream>
using namespace std;
class Project
{
public:
    string name = "";
    int age;
    int Pin;
    string Userid;
    string address;
    long long aadhar_number;
    long long mobile_number;

    void inputDetails()
    {
        cout << "DIGITAL INDIA E HOSPITAL REGISTRATION FORM " << endl;
        cout << "NAME:" << endl;
        cin >> name;
        cout << "AGE:" << endl;
        cin >> age;
        cout << "ADDRESS:" << endl;
        cin >> address;
        cout << "AADHAR NUMBER:" << endl;
        cin >> aadhar_number;
        cout << "MOBILE NUMBER:" << endl;
        cin >> mobile_number;
    }

    void login()
    {
        cout << "ENTER THE PIN(should contain digits only):" << endl;
        cin >> Pin;
        cout << "ENTER THE USERNAME(should contain special charcters and alphabets):" << endl;
        cin >> Userid;
    }

    int update()
    {
        int select;
        while (true)
        {
            cout << "SELECT 1 TO UPDATE YOUR ADDRESS" << endl;
            cout << "SELECT 2 TO UPDATE YOUR MOBILE NUMBER" << endl;
            cout << "SELECT 3 TO EXIT" << endl;
            cout << "====================" << endl;
            cout << "ENTER A CHOICE:" << select << endl;
            cin >> select;
            cout<<"============================================="<<endl;
            switch (select)
            {
            case 1:
                cout << "UPDATE YOUR ADDRESS" << endl;
                // cin >> address; 
                getline(cin, address);

                cout << "ADDRESS:" << endl;
                break;
            case 2:
                cout << "UPDATE YOUR MOBILE NUMBER" << endl;
                cin >> mobile_number;
                cout << "MOBILE NUMBER:" << endl;
                break;
            case 3:
                cout << "EXIT" << endl;
                return 0;
                break;
            }
        }
    }
    void reset()
    { 
        int new_Pin;
        cout<<"ENTER A NEW PASSWORD"<<endl;
        cin>>new_Pin;
        if(new_Pin==Pin)
        {
            cout<<"This password has been used"<<endl;
        }
        else
        {
            cout<<"Password has been resetted"<<endl;
            Pin=new_Pin;
        }
    }
};
int main()
{
    Project p1;
    int choice;
    while (true)
    {
        cout << "SELECT 1 TO ENTER BASIC DETAILS" << endl;
        cout << "SELECT 2 TO LOGIN INTO YOUR ACCOUNT" << endl;
        cout << "SELECT 3 TO UPDATE THE VALUES" << endl;
        cout << "SELECT 4 TO RESET THE PASSWORD"<<endl;
        cout << "SELECT 5 TO EXIT" << endl;
        cout << "====================" << endl;
        cout << "ENTER A CHOICE:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "TO ENTER BASIC DETAILS" << endl;
            p1.inputDetails();
            break;
        case 2:
            cout << "TO LOGIN INTO YOUR ACCOUNT" << endl;
            p1.login();
            break;
        case 3:
            cout << "TO UPDATE THE VALUES" << endl;
            p1.update();
            break;
        case 4:
            cout<<"TO RESET THE PASSWORD" <<endl;
            p1.reset();
            break;
        case 5:
            cout << "EXITED" << endl;
            return 0;
            break;
        default:
            cout << "INVALID CHOICE" << endl;
            cout << "PLEASE SELECT A CORRECT ONE" << endl;
            break;
        }
    }
}