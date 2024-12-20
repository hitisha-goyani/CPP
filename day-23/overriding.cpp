#include<iostream>
using namespace std;

 class Animal{

        public:
        void eat(){
            cout<<"animal eating....."<<endl;
        }
    };
    
class dog:public Animal{

        public:
        void eat(){
            cout<<"dog eating...."<<endl;
            Animal::eat();
        }
    };

int main(){

    dog d1;
    d1.eat();

return 0;
   
}