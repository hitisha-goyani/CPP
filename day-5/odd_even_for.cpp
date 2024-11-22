#include<iostream>
using namespace std;
int main(){

int start,end;
cout<<"start";
cin>>start;

cout<<"end";
cin>>end;


for(int i=start; i<=end; i++){
    if(i%2==0)//i%2==1 odd
    {
        cout<<i<<endl;
    }
}
return 0;

}


