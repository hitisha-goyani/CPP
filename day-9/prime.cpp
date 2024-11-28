#include<iostream>
 using namespace std;

 int main(){

    int n;
    cout<<"enter number";
    cin>>n;

    int cnt=0;

    if(n<=1){
          cout<<n<<" not prime"<<endl;

    }
    else{

        for(int i=1;i<=n;i++){
            if(n%i==0)
            cnt++;
        }
        if(cnt>2)
        cout<<n<<" not prime"<<endl;
        else
        cout<<n<<" prime"<<endl;
    }
  
return 0;
 }