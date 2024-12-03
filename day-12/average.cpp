#include<iostream>
using namespace std;

int main(){

    int array[4][4]={
        {11,12,13,14},
        {15,16,17,18},
        {19,20,21,22},
        {23,24,25,26}};


         int no_ele=sizeof(array)/sizeof(array[0][0]);

         int sum=0;

         for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                sum=sum+array[i][j];
            }
         }
         int avg=sum/no_ele;

         cout<<avg;
         return 0;
}