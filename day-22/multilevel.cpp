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

    class percial:public cat{

        public:
        void soft(){
            cout<<"softing...."<<endl;
        }
    };
int main(){

    cat c1;
    percial p1;

    c1.eat();
    c1.melow();
    p1.melow();
    p1.soft();
   

    return 0;
}