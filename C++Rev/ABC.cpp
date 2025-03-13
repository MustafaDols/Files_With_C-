#include <iostream>
using namespace std;
int main(){
  cout<<"Enter n1:"<<endl;
  int n1;
  cin>>n1;
  cout<<"Enter n2:"<<endl;
  int n2;
  cin>>n2;
  int selector;
  cout<<"Select the option: 1)sum 2)sub 3)product 4)Div "<<endl;
  cin>>selector;
//  if(selector==1){
//    cout<<n1+n2;
//  }else if(selector==2){
//    cout<<n1-n2;
//  }else if(selector==3){
//    cout<<n1*n2;
//  }else{
//    cout<<n1/n2;
//  }

  switch(selector){
    case 1: cout<<n1+n2<<endl;break;
    case 2: cout<<n1-n2<<endl;break;
    case 3: cout<<n1*n2<<endl;break;
    case 4: cout<<n1/n2<<endl;break;
    default: cout<<"Invalid option"<<endl;
  }


}