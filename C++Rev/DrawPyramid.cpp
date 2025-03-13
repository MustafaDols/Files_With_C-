#include <iostream>
using namespace std;

void printPyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (i*2)-1 ; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    printPyramid(rows);
    return 0;
}
