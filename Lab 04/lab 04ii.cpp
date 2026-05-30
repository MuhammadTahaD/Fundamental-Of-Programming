#include <iostream>
using namespace std;

int main (){
    int age;
    cout<<"Enter the Age in years to convert it into the number Days: ";
    cin>>age;
    if(age<=110 && age>=1){
        age=age*365;
        cout<<"the Age in days is:  "<<age;
    }
    else{
        cout<<"Error!!! You enter the wrong age.";
    }
}