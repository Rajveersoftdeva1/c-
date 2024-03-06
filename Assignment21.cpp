#include<iostream>
using namespace std;

int main(){
    int second=7200,hour,min,sec;

    hour=second/3600;
    min=second/60;
    sec=second;

    cout << "Hour :" << hour;
    cout << "\nMinute :" << min;
    cout << "\nSecond :" << sec;
}