#include<iostream>
using namespace std;
int main(){

    int x=5;

    cout<<"initial value of X :"<<x<<endl;
    x++;
    cout<<"after x++:"<<x<<endl;

    int a=10;
    int b,c;
    
    b=++a;

    c=a++;

    cout<<"a:"<<a<<", b:"<<b<<", c:"<<c<<endl;

    return 0;

}

