#include<iostream>

using namespace std;

int value(int a,int b){

    cout<<"passing by value:"<<a+b;
}

int main(){

    value(7,8);//passing value;
}