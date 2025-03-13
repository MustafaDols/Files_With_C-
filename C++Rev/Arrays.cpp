#include <iostream>
using namespace std;
int main() {
    string names[3][2] = {
         {"Jack", "John"}
        ,{"Mickle", "Kane"}
        ,{"Taison","Fury"}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << names[i][j] << " ";
        }
        cout << endl;
    }
}
