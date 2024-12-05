#include<iostream>

using namespace std;

int two(int);
int three(int);


int four(int num){

    return num*three(num-1);

}
int  three(int num){

    return num*two(num-1);

}

int two(int num){

    num=num-1;
    return num;
}

int main(){

    int num=4;
    cout<<four(num);
    
    

    return 0;
}