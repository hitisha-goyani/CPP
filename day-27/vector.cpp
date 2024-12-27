#include<iostream>
#include<vector>

using namespace std;




int main(){


    vector <int> arr;
    vector <int> arr2(5,11);
    vector <int> arr3{4,6,8,10};

 

    cout<<arr3[0]<<endl;
    cout<<arr3[1]<<endl;
    cout<<arr3[2]<<endl;
    cout<<arr3[3]<<endl;
   



    arr3.push_back(23);
     cout<<arr3[4]<<endl;

     arr3.pop_back();

     cout<<arr3.at(2)<<endl;

     cout<<arr3.empty()<<endl;

    //  arr3.clear();

    arr3.insert(arr3.begin()+1,5);

    
    for(int i=0; i<arr3.size(); i++){
    cout << arr3[i] << endl;
}

  

    cout<<"-----array size----"<<endl;

    cout<<arr3.size()<<endl;



    return 0;
}