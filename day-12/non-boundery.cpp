#include<iostream>

using  namespace std;

int main(){

    int array[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11,12},
        {13,14,15,16}};

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(i==0 || i==3 || j==0 || j==3){
                    cout<<" "<<" ";
                }
                else{
                   cout<<array[i][j]<<" ";
                }
            }
            cout<<endl;
        }
}