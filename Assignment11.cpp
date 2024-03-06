#include<iostream>
using namespace std;

int main(){
    int num1,num2;

    cout << "Enter Num1 :";
    cin >> num1;
    cout << "Enter Num2 :";
    cin >> num2;

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout << "Num1 : " << num1;
    cout << "\nnum2 : " << num2;


}