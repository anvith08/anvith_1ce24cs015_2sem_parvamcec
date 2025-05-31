#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12,80,102,13,78,34};
    int *ptr = arr;
    int max = ptr[0];
    for (int i = 0; i < 6; i++)
    {
        if (ptr[i] > max){
            max = ptr[i];
        }
    }
    cout << max << endl;
    
    return 0;
}