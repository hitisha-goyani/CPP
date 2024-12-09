#include<iostream>

using namespace std;

int main(){

    float f, c;

    cout<<"enter the temprature in celsius:";
    cin>>c;

    f = (9/5 * c) + 32;

   cout << "The temperature in Celsius    : " << c << endl;
    cout << "The temperature in Fahrenheit : " << f<< endl;

    return 0;
}