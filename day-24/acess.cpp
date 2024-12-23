#include<iostream>
#include<string.h>
using namespace std;

// abstract class
// interface

class A
{
    protected:
        int x=12;
        int y = 13;
        int z = 14;
};


class B : protected A
{
        public:
        void call(){
            cout << A::x;
        }
   
};



int main(){
    

B obj;
obj.call();

    return 0;
}