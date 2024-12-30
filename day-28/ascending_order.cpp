#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr = { 5, 2, 7, 5, 9};
    vector<int> arr2;

    int n=arr.size();

    int lg=100;
    int lgi;

    for(int j=0;j<n;j++){
            for(int i=0;i<arr.size();i++){
                if(lg>arr[i]){
                    lg=arr[i];
                    lgi=i;
        }
    }
    arr2.push_back(lg);
    arr.erase(arr.begin()+lgi);
    lg=100;
    }

    


    for(int ele:arr2){

        cout<<ele<<" ";
    }




    return 0;
}