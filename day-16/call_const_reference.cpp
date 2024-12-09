#include<iostream>

using namespace std;

int const_reference(const int &n){
    cout<<n*n; 
}

int main(){

    int a=10;
    const_reference(a);
}