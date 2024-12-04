#include<iostream>

using namespace std;

//take something return nothing


 void oddeven(int n){
        if(n%2==0){
            cout<<"number is even";
        }
        else
        {
            cout<<"number is odd";
        }
        
    }

    void isprime(int number){

        int count=0;

        for(int i=2;i<number;i++){
            if(number%i==0){
                count++;
            }

        }

        if(count==0){

            cout<<"number is prime";
        }
        else{
            cout<<"number is not prime";
        }

    }

int main(){

        int num;
        cout<<"enter number:";
        cin>>num;

        oddeven(num);
        cout<<endl;
        isprime(num);
   
return 0;

}
