#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10,20,30};
    int *ptr = arr;
    cout << arr[1] << endl;
    cout << &arr[1] << endl;
    arr[1] = 23;

    cout << arr[1] <<endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = 44;
    cout << arr[1] << endl;

    cout << sizeof(arr) << endl;

    return 0;
}