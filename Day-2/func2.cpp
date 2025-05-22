#include <iostream>
using namespace std;

int add(int num1, int num2); // function declaration/prototype
void sub(int num1, int num2);
int mul();
void div();

int main() {
    int num1;
    int num2;
    cout << "Enter the numbers : ";
    cin >> num1 >> num2;

    int res1 = add(num1, num2); // function call
    cout << "Result Addition : " << res1 << endl;
    
    sub(num1, num2);

    int res2 = mul();
    cout << "Result Multiplication : " << res2 << endl;

    div();

    return 0;
}

int add(int num1, int num2){  // function definition
    int sum = num1 + num2;
    return sum;
}

void sub(int num1, int num2){  // function definition
    int res = num1 - num2;
    cout << "Result Subtraction : " << res << endl;
}

int mul(){  // function definition
    int num1 = 2;
    int num2 = 3;
    int res = num1 * num2;
    return res;
}

void div(){  // function definition
    int num1 = 10;
    int num2 = 2;
    int res = num1 / num2;
    cout << "Result Division: " << res << endl;
}