#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr = { 5, 2, 7, 5, 9};
    vector<int> arr2;

    int n=arr.size();

    for(int i=n-1;i>=0;i--){
        arr2.push_back(arr[i]);
    }

    for(int ele:arr2){

        cout<<ele<<endl;
    }




    return 0;
}