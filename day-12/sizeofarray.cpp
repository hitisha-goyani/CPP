#include<iostream>

using namespace std;

int main(){

    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    
    cout<<sizeof(array)/sizeof(array[0][0]);
}