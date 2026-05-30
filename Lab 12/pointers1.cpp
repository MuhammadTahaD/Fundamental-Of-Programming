//    1.  Write a C++ program that demonstrates the use of pointers to swap the values of two variables.

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int var1, var2;
    int* ptr1;
    int* ptr2;
    int temp;
    var1 = 10;
    var2 = 20;
    cout<<"After swapping with values of the variables will be : "<<endl;
    ptr1 = &var1;
    ptr2 = &var2;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout<<"The value of 1st variable will be : "<<*ptr1<<endl;
    cout<<"The value of 2nd variable will be : "<<*ptr2<<endl;
    return 0;

}

