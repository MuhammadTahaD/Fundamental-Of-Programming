#include <iostream>
using namespace std;

int main ()
{
    int C,F;
    int num;
    cout<<"Please chosse 1 to convert Celcius into Faranheight and Chosse 2 to convert Faranhight: ";
    cin>>num;
    if(num==1){
        cout<<"Enter the value of Temprature in Faranheight: ";
        cin>>F;
        C=(F-32)*5/9;
        cout<<C;
    }
    
    else if (num==2){
        cout<<"Enter the value of temprature in Celsius: ";
        cin>>C;
        F=(C*9/5)+32;
        cout<<F;
    }
    
    else{
        cout<<"Error you  input the wrong number"<<endl;
    }
    return 0;
    
    
    
}

