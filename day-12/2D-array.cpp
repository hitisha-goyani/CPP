#include<iostream>

using namespace std;

int main(){


    int row;
    cout<<"row:";
    cin>>row;
    int col;
    cout<<"col:";
    cin>>col;

    int array[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"array["<<i<<"]["<<j<<"]:";
            cin>>array[i][j];
        }
    }
    cout<<endl;

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<array[i][j]<<" ";
        }
         cout<<endl;
    }
   

    return 0;
}