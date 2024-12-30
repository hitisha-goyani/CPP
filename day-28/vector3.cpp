#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr={2,4,3,7,5,9,2};
    vector<int> arr2;

    int n=arr.size();
     // minimum element of first and last digits
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            arr2.push_back(arr[i]);
        }
    }

    for(int ele:arr2){

        cout<<ele<<" ";
    }


    return 0;
}