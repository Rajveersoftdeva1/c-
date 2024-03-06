#include<iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter Age :";
    cin >> age;

   if(age>=18){
    cout << "You can cast the vote";
   }else{
    cout << "You can't cast the vote";
   }
}