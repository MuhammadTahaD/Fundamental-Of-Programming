// Name : Muhammad Taha          
//CMS ID : 518133
#include<iostream>
using namespace std;
int reverseNumber(int);
int main(){
    int number;
    cout<<"Enter the 4-digit number: "<<endl;
    cin>>number;
    if(number>1000 && number<9999 || number<-1000 && number>-9999){
        cout<<"The entered number is: "<<number<<endl;
        cout<<"The reverse number is: "<<reverseNumber(number)<<endl;
    }
 return 0;
}
int reverseNumber(int number) {
    int revNumber = 0;
     {
        int reminder = number % 1000;          
        revNumber = (revNumber * 1000) + reminder;
        number /= 1000;  
        int reminder = number % 100;          
        revNumber = (revNumber * 100) + reminder;
        number /= 100; 
        int reminder = number % 10;          
        revNumber = (revNumber * 10) + reminder;
        number /= 10; 
        int reminder = number % 1;          
        revNumber = (revNumber * 1) + reminder;
        number /= 1;                           
    }
    return revNumber;
}