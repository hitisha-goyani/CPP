#include<iostream>

using namespace std;

int rec(int num){

    if(num<=1){
        return 1;
    }
    return num*rec(num-1);//4*3=12*2 24
}

int main(){

    int num;
    cout<<"enter number:";
    cin>>num;

    cout<<rec(num);

    return 0;
}