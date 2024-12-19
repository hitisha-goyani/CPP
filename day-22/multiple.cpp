#include<iostream>
using namespace std;



 class engine{

        public:
        
        char engine_details[50] = "v8";
    };

    class cat{

        public:
       
        char wheel_details[50] = "alloy wheels";
    };

    class vehicle:public engine,public cat{

        public:
        void build(){
            cout<<"car is builded using "<<this->engine_details<<" and 12 inch "<<this->wheel_details<<endl;
        }
    };
int main(){

    vehicle v1;
    v1.build();
   

    return 0;
}