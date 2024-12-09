#include<iostream>

using namespace std;

int variable(int a,int b){
    cout<<"passing variable:"<<a+b;
}

int main(){

    int a=5;
    int b=7;

    variable(a,b);//passing variable;

}