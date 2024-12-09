#include<iostream>

using namespace std;

int array(int arr[]){
    cout<<arr[3]<<endl;
}

int  main(){

    int arr[5]={1,2,3,4,5};

    array(arr);

    return 0;
}