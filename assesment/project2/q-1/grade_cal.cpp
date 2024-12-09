#include <iostream>
using namespace std;

int main(){
    int score;
    cout<<"Enter Your score: ";
    cin>>score;
    if (score >= 90){
        cout<<"Your Grade is A";
    }
    else if (score >= 80){
        cout<<"Your Grade is B";
    }
    else if (score >= 70){
        cout<<"Your Grade is C";
    }
    else if (score >= 60){
        cout<<"Your Grade is D";
    }
    else if (score >= 50){
        cout<<"Your Grade is E ";
    }
    else if (score >= 30){
        cout<<"Your Grade is F";
    }
    else if (score <= 30){
        cout<<"Your Grade is F";
    }
    else{
        cout<<"you are fail";
    }
    return 0;
}