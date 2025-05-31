#include <iostream>
using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element " << i+1 << " : " << endl;
        cin >> a[i];
    }

    cout << "Array Elements\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i+1 << " : " << a[i] << endl;
    }  
    // cout << (a+1) << endl;
    // cout << (a+2) << endl;
    return 0;
}