#include<iostream>

using namespace std;

int main(){
    // first pattern
    for(int i=1;i<=5;i++){

        for(int k=i;k<=5;k++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++){
             cout<<"*"<<" ";

        }
         cout<<endl;
    }
    cout<<endl;

    // second pattern

     for(int i=1;i<=5;i++){

        for(int k=i;k<=5;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
             cout<<"*"<<" ";

        }
         cout<<endl;
    }
    cout<<endl;

    // third pattern
     for(int i=1;i<=5;i++){
         for(int l=1; l<=i; l++){
            cout << "*" << " ";
        }
        for(int k=i;k<5;k++){
            cout<<" "<<" ";
        }

        for(int k=i;k<5;k++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++){
             cout<<"*"<<" ";

        }
         cout<<endl;
    }
    cout<<endl;

   




  return 0;
}