#include<iostream>

using namespace std;

int main(){

    int num = 100;

    int &ref = num;  // deep copy;
    int num2 = num; // shalow copy;

    ref = 300;

    num2 = 900;


    cout << "ref " << ref << "num " << num << endl;
    cout << "num2 " << num2 << "num " << num << endl;


    return 0;
}

