#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    for(int i = 0; i < 2 ; i++){
          for(int j = 0; j < 60 ; j++ ){
            for(int k = 0; k < 60; k++){
                cout<<"Clock : ";
                if(i<10){
                    cout<<"0"<<i<<":";
                }
                else{
                    cout<<i<<":";
                }
                if(j<10){
                    cout<<"0"<<j<<":";
                }
                else{
                    cout<<j<<":";
                }
                if(k<10){
                    cout<<"0"<<k<<":";
                }
                else{
                    cout<<k<<":";
                }
                cout<<endl;
                Sleep(1000);
            }
          }
    }
    return 0;
}