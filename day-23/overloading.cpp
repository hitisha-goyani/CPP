#include<iostream>
using namespace std;

 class Vehicle{

        public:
        void mark(){
            cout<<"car is make"<<endl;
        }
         void mark(int a){
            cout<<"car speed "<<a<<endl;
        }
         void mark(int a,int b){
            cout<<"car is make "<<a<<" year "<<b<<" workers"<<endl;
        }
    };

int main(){


Vehicle v1;
v1.mark();
v1.mark(10);
v1.mark(10,20);

return 0;
   
}

