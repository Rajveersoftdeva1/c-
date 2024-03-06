#include<iostream>
using namespace std;

int main(){
    int l,w,area,peri;

    cout << "Enter Length of Rectangle :";
    cin >> l;
    cout << "Enter Width of Rectangle :";
    cin >> w;

    area=l*w;
    peri=2*(l+w);

    cout << "Area of Rectangle is : " << area;
    cout << "\nPerimeter of Rectangle is : " << peri;


}