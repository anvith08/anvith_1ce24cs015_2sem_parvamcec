#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    fout.open("4_file_handling.txt");

    fout.put('H');
    fout.close();

    ifstream fin("4_file_handling.txt");
    char v1;
    fin.get(v1);
    fin.close();
    cout << "The value of v1 is " << v1 << endl;
      
    return 0;
}