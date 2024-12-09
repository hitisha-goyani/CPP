#include<iostream>

using namespace std;


int pointer(int *a,int *b){
cout<<"passing by pointer:"<<*a + *b;
}
int main(){

    int a=12;
    int b=13;

    int *ptr1=&a;
    int *ptr2=&b;

    pointer(ptr1,ptr2);

    return 0;
}