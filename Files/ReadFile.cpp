#include <iostream>
#include  <fstream>
#include  <string>
using namespace std;
int main() {
    int  x ;
    char c ;
    double y ;
    string a  ;
    string a1 ;
    ifstream infile;
    infile.open("example.txt");
    infile >> c >> x >> y >> a >> a1;
    cout << c <<endl<< x <<endl<< y <<endl<< a <<endl<< a1 ;
    infile.close();
    return 0;
}