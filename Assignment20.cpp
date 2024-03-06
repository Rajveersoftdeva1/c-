#include<iostream>
using namespace std;

int main(){
    int persantage;

    cout << "Enter Persantage";
    cin >> persantage;

    if(persantage>=60){
        cout << "1st Divition";
    }
    else if (persantage>=48 & persantage<60){
        cout << "2st Divition";
    }
    else if (persantage>=33 & persantage<48){
        cout << "3st Divition";
    }
    else{
        cout << "Fail";
    }
}