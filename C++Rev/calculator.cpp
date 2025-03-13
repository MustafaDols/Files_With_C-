#include <iostream>
using namespace std;
void calculate(){
  int first, second;
  cout<<"  Enter the first number:  ";
  cin>>first;
  cout<<"  Enter the second number: ";
  cin>>second;
  cout<< "choose the selector : \n";
  cout<<" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n";
  int selector;
  cin>>selector;

  switch(selector){
    case 1: cout<<"the sum of the two numbers: "<<first+second; break;
    case 2: cout<<"the difference of the two numbers: "<<first-second; break;
    case 3: cout<<"the product of the two numbers: "<<first*second; break;
    case 4: cout<<"the Division of the two numbers: "<<first/second; break;
  }

}
int main(){
  calculate();
}