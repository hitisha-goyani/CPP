#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int>  arr ={ 7,3,5,3,7,2,8,4,9};
    vector <int> arr2;
    
    int n = arr.size();
    // maximum element of first and last digits
    for(int i=1;i<n-1;i++){

        if(arr[i]<arr[i+1] && arr[i]<arr[i-1]){
            arr2.push_back(arr[i]);
        }
    }

    for(int ele:arr2){

        cout<<ele<<"    ";
    }


    return 0;

}
