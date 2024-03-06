#include<iostream>
using namespace std;

int main(){
    int num1,num2;

    cout << "Enter a Num1";
    cin >>  num1;

    cout << "Enter a Num2";
    cin >>  num2;

    if(num1>num2){
        cout << "Largest Number is " << num1;
    }
    else{
        cout << "Largest Number is " << num2;

    }
}