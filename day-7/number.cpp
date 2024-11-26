#include<iostream>
using namespace std;

int main(){
// one pattern
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
    
// two pattern

     for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    cout<<endl;

// three pattern

    for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }

    
    return 0;
}