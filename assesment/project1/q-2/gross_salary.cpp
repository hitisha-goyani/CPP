#include<iostream>

using namespace std;

int main(){

    int salary ,gross,hra,da,ta;

    cout<<"enter the basic salary:"<<endl;
    cin>>salary;

    hra=salary*10/100;
    da=salary*5/100;
    ta=salary*8/100;
    gross=hra+da+ta;

    cout<<"the gross salary:"<<gross<<endl; 
    return 0;
}

