#include<iostream>

using namespace std;

//tnrn=take nothing return nothing

void odd(){

    for(int i=0;i<20;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
    }
}

void even(){
    for(int i=0;i<20;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}

int main(){

    cout<<"calling to the first function";

    odd();
    cout<<endl;
    even();

    return 0;

}