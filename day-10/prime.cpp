#include<iostream>
using namespace std;

int main(){

    int num;
        cout<<"enter number:";
        cin>>num;
    
    int count=0;

        for( int i=2;i<num;i++){
            if(num%i==0)
            count++;
        }
        if(count>0){
            cout<<"number is not prime";
        }
        else{
            cout<<"number is prime";
        }

        return 0;
}