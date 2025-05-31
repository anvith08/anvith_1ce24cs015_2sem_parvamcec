#include <iostream>
#include <string>
using namespace std;

class Reg
{
public:
    string name="", email="", address="";
    int D0B[3]={0,0,0}, class_12=0;
    int dip_marks=0, dip_res=0, dip_year=0;
    int paper=0;
    int pass_dip_year=0;
    long phone_no=0;
    

    void personal_details()
    {
        cout << "Enter Your Name : " << endl;
        cin >> name;
        cout << "Enter Your DOB : " << endl;
        cout << "DATE : " << endl;
        cin >> D0B[0];
        cout << "MONTH : " << endl;
        cin >> D0B[1];
        cout << "YEAR : " << endl;
        cin >> D0B[2];
        cout << "Enter Your Email : " << endl;
        cin >> email;
        cout << "Enter Your Phone Number : " << endl;
        cin >> phone_no;
        cout << "Enter Your Address : " << endl;
        cin >> address;
    }

    void educational_qualification()
    {

        // cout << "Select the PAPER for Primary Teacher OR Upper Primary Teacher" << endl;
        // cin >> paper;
        // switch (paper)
        // {

        // case 1: // paper 1
        {
            cout << "Enter Class 12 Marks : " << endl;
            cin >> class_12;

            cout << "Enter the Years of Diploma in Elementary Education  (Year 2 , Year 4) : " << endl;
            cin >> dip_year;

            switch (dip_year)
            {
            case 2:
                cout<< "2-Year Diploma in Elementary Education (D.Ed)"<<endl;
                cout << "-----------------------------------------------------\n";
                cout << "enter the REG ID : " << endl;
                cin >> dip_res;
                cout << "Enter the marks obtained : " << endl;
                cin >> dip_marks;
                cout << "Enter the year of passing : " << endl;
                cin >> pass_dip_year;
                break;
            case 4:
                cout<< "4-Year Diploma in Elementary Education (B.EI.Ed)"<<endl;
                 cout << "-----------------------------------------------------\n";
                cout << "enter the REG ID : " << endl;
                cin >> dip_res;
                cout << "Enter the marks obtained : " << endl;
                cin >> dip_marks;
                cout << "Enter the year of passing : " << endl;
                cin >> pass_dip_year;
                break;

            default:
                cout << "invalid selection : " << endl;
                break;

            }
            
            // break;
        // }
        // case 2: // paper 2

        // {
        //     cout << "Enter Bachelor's Dergree marks : " << endl;
        //     cin >> dip_marks;
        //     cout << "Enter the Years of Diploma in Elementary Education  (2 Year , 4 Year ) : " << endl;
        //     cin >> dip_year;

        //     switch (dip_year)
        //     {
        //     case 2:
        //         cout<< "2-Year Diploma in Elementary Education (D.Ed)"<<endl;
        //         cout << "enter the REG ID : " << endl;
        //         cin >> dip_res;
        //         cout << "Enter the marks obtained : " << endl;
        //         cin >> dip_marks;
        //         cout << "Enter the year of passing : " << endl;
        //         cin >> pass_dip_year;
        //         break;
        //     case 4:
        //         cout<< "4-Year Diploma in Elementary Education (B.EI.Ed)"<<endl;
        //         cout << "enter the REG ID : " << endl;
        //         cin >> dip_res;
        //         cout << "Enter the marks obtained : " << endl;
        //         cin >> dip_marks;
        //         cout << "Enter the year of passing : " << endl;
        //         cin >> pass_dip_year;
        //         break;

        //     default:
        //         cout << "invalid selection : " << endl;
        //         break;
        //     }
            // break;
            // }
        }
    }

    void regis(Reg &r)
    {
        while(true){
            cout << "-----------------------------------------------------\n";
            cout << "1. Personal Details\n2. Educational Details\n3. Back\n";
            cout << "-----------------------------------------------------\n";
            int choice;
            cout << "Enter Your Choice : ";
            cin >> choice;
            cout << "\n";
            

            if (choice == 1)
            {
                r.personal_details();
            }
            else if (choice == 2)
            {
                r.educational_qualification();
            }
            else if (choice == 3){
                break;
            }
        }
    }

    void display()
    {
        cout << "====================================================\n";

        cout << "Personal Details : \n\n";
        cout << "Name          : " << name << endl
             ;
        cout << "Date of Birth : " << D0B[0] << "/" << D0B[1] << "/" << D0B[2] << endl
            ;
        cout << "Email         : " << email << endl
             ;
        cout << "Phone Number  : " << phone_no << endl
             ;
        cout << "Address       : " << address << endl;

        cout << "====================================================\n";

        cout << "Educational Qualifications : \n\n";
        
        cout << "Class 12 Percentage       : " << class_12 << endl;
        cout << "Diploma - Years           : " << dip_year << endl
                ;
        cout << "Diploma - Percentage      : " << dip_marks << endl
            ;
        cout << "Diploma - Year of Passing : " << dip_marks << endl;

        cout << "====================================================\n";
    }

    void modify(Reg &r){
        cout << "What would you like to update?\n";
        cout << "1. Personal Details\n2. Educational Details\n";
        int choice;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << "\n";

        if (choice == 1)
        {
            r.personal_details();
        }
        else if (choice == 2)
        {
            r.educational_qualification();
        }
    }

};

int main()
{
    Reg r;
    int choice;
    string reg_id;

    while (true)
    {
        cout << "====================================================\n";
        cout << "TEACHER ELIGIBILITY TEST (TET) REGISTRATION\n";
        cout << "1. Fill Details\n2. Display Details\n3. Modify Details\n4. Register\n5. Exit\n";
        cout << "====================================================\n";
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << "\n";

        switch (choice)
        {
        case 1:
            r.regis(r);
            break;
        case 2:
            r.display();
            break;
        case 3:
            r.modify(r);
            break;
        case 4:
            if ((r.dip_year!=0) && (r.pass_dip_year!=0)){
                reg_id = to_string(r.dip_year)+"TET"+to_string(r.pass_dip_year);
                cout << "Register ID : " << reg_id;
                cout << "\n";
            } else{
                cout << "Please enter the details completely...\n\n\n";
            }

            break;
        case 5:
            cout << "EXITING...\n";
            return 0;
            break;
        default:
            cout << "INVALID SELECTION!\n";
            break;
        }
    }
}















/*
PERSONAL DETAILS
===================
name 
DoB
parents name 
email
phone number
address



EDUCATIONAL QUALIFICATION      add year of passing 

=======================
PAPER 1     1 = contains class 12 marks with more than 50%
            2 = 2 year diploma   in elementary education  D.Ed,
                 4 year diploma  bachelor of element   B.EI.Ed

PAPER 2         Bachelor's Degree. 
                Bachelor of Education (B.Ed). 













*/