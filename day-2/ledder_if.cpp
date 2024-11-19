#include<iostream>
using namespace std;
int main(){
     int i;
     cout<<"enter item no";
     cin>>i;

     if(i==1){
        cout<<"1 is pizza";
     }
     else if(i==2){
        cout<<"2 is burger";

     }
     else if(i==3){
        cout<<"3 is sandwish";
     }

     else{
        cout<<" food is not available in menu";
     }
}