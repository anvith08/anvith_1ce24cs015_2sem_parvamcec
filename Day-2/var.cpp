#include <iostream>
using namespace std;
int main() {
  /*
    syntax:
        data_type variable_name; --> variable dec
        variable_name = value; --> assign value to a variable
        data_type variable_name = value; --> declaration and assigning
  */
  int count;
  count = 40;
  float marks = 100;
  char gender = 'M';
  bool var_name = true;
  string name = "Test";

  cout << "int: " << count << endl; 
  cout << "float: " << marks << endl; 
  cout << "char: " << gender << endl; 
  cout << "bool: " << var_name << endl; 
  cout << "string: " << name << endl;
  return 0;
}