#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a Number";
    cin >> num;

    switch(num){

        case 1 :
        cout << "One";
        break;

        case 2 :
        cout << "Two";
        break;
        
        case 3 :
        cout << "Three";
        break;

        default :
        cout << "Other Input";
        break;

    }
}