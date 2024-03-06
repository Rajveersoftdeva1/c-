#include<iostream>
using namespace std;

int main(){
  int num1,num2,num3,arg;

  cout << "Enter a Num1 :";
  cin >> num1;

  cout << "Enter a Num2 :";
  cin >> num2;

  cout << "Enter a Num3 :";
  cin >> num3;

  arg=(num1+num2+num3)/3;

  cout << "Average of the numbers : " << arg ;
}