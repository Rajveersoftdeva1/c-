#include<iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter Age :";
    cin >> age;

   if(age>=5 & age<=14){
    cout << "Child can go to school";
   }else{
    cout << "Child can't go to school";
   }
}