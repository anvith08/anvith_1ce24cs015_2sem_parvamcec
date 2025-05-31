#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a, b, sum;
    cout << "Enter a : " << endl;
    cin >> a;
    cout << "Enter b : " << endl;
    cin >> b;
    sum = a+b;

    ofstream fout;
    fout.open("problem_1.txt");
    fout << "The sum of " << a << " and " << b << " is : " << sum;
    
    fout.close();

    ifstream fin("problem_1.txt");
    string line;
    while (getline(fin, line)){
        cout << line << endl;
    }
    
    fin.close();
      
    return 0;
}