#include<iostream>
using namespace std;

int main(){

    int *arr;
    arr=new int[5];

    if(arr==NULL){

        cout<<"memory allocation is failed..."<<endl;
    }

    else{

        cout<<"memory allocation is successfully...."<<endl;

    }

    delete[] arr;
    arr = NULL;

    if(arr==NULL){

        cout<<"memory dellocation is successfully... "<<endl;
    }
    else{

         cout<<"memory dellocation is failed... "<<endl;
    }
    
    return 0;
}

