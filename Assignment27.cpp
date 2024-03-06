#include <iostream>
using namespace std;

int main(){

    int num,i=1;

    cout << "Enter a Number :";
    cin >> num;

    while(i<=10){
        cout << "\n" <<num*i;
        i++;
    }
}