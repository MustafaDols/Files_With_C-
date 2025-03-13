#include <iostream>
#include  <fstream>
using namespace std;
int main() {
 ofstream myfile("example.txt");
 if (myfile.is_open()) {
  myfile << "This is line 1\n";
  myfile << "This is line 2\n";
  myfile.close();
 }
 else {
  cout << "Unable to open file";
 }
 return 0;
}