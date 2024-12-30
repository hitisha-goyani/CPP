#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1(4,5);

    vector<vector<int>>v2(5,v1);

    for(vector<int> ele :v2){
        for(int ele :v1){
            cout<<ele<<" ";
        }
        cout<<endl;
    }




return 0;
}