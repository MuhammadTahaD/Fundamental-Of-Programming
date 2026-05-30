#include <iostream>
using namespace std;

int main (){
    int radius,circumference;
    cout<<"Enter the value of Radius :";
    cin>>radius;
   if(radius>=0)
    {
    circumference = 2*3.14*radius;
    cout<<"The circumference will be :"<<circumference;
    }
    else{
        cout<<"You enter the wrong raduis.";
    }
    return 0;
}