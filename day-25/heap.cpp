#include<iostream>
using namespace std;

int main(){

    int *a = new int(7);
    delete a;

    cout<<*a<<endl;


    return 0;
}