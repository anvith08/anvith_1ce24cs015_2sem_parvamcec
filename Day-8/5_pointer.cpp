#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: " << endl;
        // cin >> *(arr + i);
        // cin >> arr[i];
        cin >> i[arr];
    }
    cout << "Elements of an array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    delete[] arr;
    return 0;
}