#include<iostream>
using namespace std;



 class vehicle{

        public:
        
       
        char wheel_details1[50] = "allyumium wheels";
        char wheel_details2[50] = "steel wheels";
    };

    class car:public vehicle{

        public:
       
        void build(){
            cout<<"car is builded using 4 "<<this->wheel_details1<<endl;
        }
    };

    class bike:public vehicle{

        public:
        void build(){
            cout<<"bike is builded using 2 "<<this->wheel_details2<<endl;
        }
    };
int main(){

    car c1;
    bike b1;

    c1.build();
    b1.build();
   

    return 0;
}