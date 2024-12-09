#include<iostream>

using namespace std;

int reference(int &n){

    n=10;
    cout<<n*n;
}

int main(){

    int a=5;

    reference(a);

    return 0;
}