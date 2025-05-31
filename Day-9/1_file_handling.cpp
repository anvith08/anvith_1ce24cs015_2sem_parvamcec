#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;   // creating object to write file
    fout.open("1_file_handling.txt");   // opening in write mode
    fout << "Hello world\n";  // write data into it
    
    // close the file
    fout.close();
    cout << "File is closed\n";
      
    return 0;
}