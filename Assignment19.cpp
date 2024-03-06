#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;

    cout << "Enter a Num1 :";
    cin >>  num1;

    cout << "Enter a Num2 :";
    cin >>  num2;

    cout << "Enter a Num2 :";
    cin >>  num3;

    if(num1>num2 & num1>num3){
        cout << "Largest Number is " << num1;
    }
    else if(num2>num1 & num2>num3){
        cout << "Largest Number is " << num2;
    }
    else{
        cout << "Largest Number is " << num3;

    }
}