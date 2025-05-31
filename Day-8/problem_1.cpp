#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12,32,63,13,78,34}, even_count = 0, odd_count = 0;
    int *ptr = arr;
    for (int i; i < 6; i++)
    {   
        if (*(ptr+i)%2 == 0){ // or i[ptr] or ptr[i]
            even_count += 1;
            cout << i[ptr] << " is Even\n";
                        
        }
        else{
            odd_count += 1;
            cout << *(ptr+i) << " is Odd\n";
        }
    }
    cout << "Even Count : " << even_count << endl;
    cout << "Odd Count : " << odd_count << endl;
    
    return 0;
}