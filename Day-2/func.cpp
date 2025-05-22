#include <iostream>
using namespace std;

int add(int num1, int num2); // function declaration/prototype


int main() {
    int num1;
    int num2;
    cout << "Enter the numbers : ";
    cin >> num1 >> num2;
    int res1 = add(num1, num2); // function call
    cout << "Result : " << res1 << endl;

    return 0;
}

int add(int num1, int num2){  // function definition
    int sum = num1 + num2;
    return sum;
}