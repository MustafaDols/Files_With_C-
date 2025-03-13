#include <iostream>
#include  <fstream>
#include  <string>
using namespace std;
int main() {
    int  x = 7;
    char c = 'r';
    double y =6.02;
    string a  ="Name";
    string a1 ="Name1";
    ofstream myfile;
    myfile.open("example.txt");
    myfile << c << x <<' '<< y << a <<' '<< a1 ;
    myfile.close();
    return 0;
}