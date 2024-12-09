#include <iostream>
using namespace std;

int main(){
    int score;
    cout<<"Enter Your score: ";
    cin>>score;
    if (score >= 90){
        cout<<"Your Grade is A"<<" "<<"Excellent work!.";
    }
    else if (score >= 80){
        cout<<"Your Grade is B"<<" "<<"Well done.";
    }
    else if (score >= 70){
        cout<<"Your Grade is C"<<" "<<"Good job.";
    }
    else if (score >= 50){
        cout<<"Your Grade is D"<<" "<<"you passed, but you could do better’.";
    }
    
    else{
        cout<<"Your Grade is F"<<" "<<"Sorry, you failed.";
    }
    return 0;
}