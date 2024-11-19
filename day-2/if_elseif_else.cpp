#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"enter num1:";
    cin>>num1;
    cout<<"enter num2:";
    cin>>num2;

    if(num1 > num2){
        cout<<"number 1 is greater";
    }
    else if(num1 < num2){
        cout<<"number 2 is greater";
    }
    else{
        cout<<"number1 and number 2 is equal";
    }


}
