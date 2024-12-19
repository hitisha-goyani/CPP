#include<iostream>
using namespace std;



 class animal{

        public:
        void eat(){
            cout<<"eating...."<<endl;
        }
    };

    class cat:public animal{

        public:
        void melow(){
            cout<<"melowing..."<<endl;
        }
    };
int main(){

    cat c1;

    c1.eat();
    c1.melow();
   

    return 0;
}