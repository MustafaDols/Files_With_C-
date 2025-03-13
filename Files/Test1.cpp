#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ofstream myfile;
  myfile.open("example2.dat");
  myfile <<123456;
  myfile.close();
  ifstream infile("example2.dat", ios::in | ios::ate);
  cout << infile.tellg();
  return 0;
  }