#include<iostream>
using namespace std;


//abstract class
//interface
class main{

    public:

    virtual void signup()=0; //virtual method;
    virtual void login()=0; //virtual method;

    void calling(){

        cout<<"we are getting call..."<<endl;
    }
};


class sub:public main{

    public :
    void signup(){
        cout<<"you are signup....."<<endl;
    }

    void login(){
        cout<<"you are login...."<<endl;
    }

};

int main(){

    sub obj;
    obj.signup();
    obj.login();
    obj.calling();

    return 0;
}
