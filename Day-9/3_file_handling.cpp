#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string b;
    ofstream fout;   // creating object to write file
    fout.open("1_file_handling.txt");   // opening in write mode
    cout << "Enter a text : \n";
    // cin >> b;
    // getline(cin, b);
    // cout << b << endl;
    fout << "Hello world test\n";  // write data into it
    
    // close the file
    fout.close();
    cout << "file written\n";

    ifstream fin("1_file_handling.txt");
    string line;
    while (getline(fin, line)){
        cout << line << endl;
    }
    
    fin.close();
      
    return 0;
}