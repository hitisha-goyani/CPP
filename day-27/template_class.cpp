#include<iostream>

using namespace std;

template <typename T>

class collection{

    private:

    int size;
    T *arr;

    public:

    void createArr(int size){
        this->size=size;
        arr = new T[this->size];
        if(arr !=NULL){
            cout<<"array created is sucessfully.."<<endl;
        }
        else{
               cout<<"array is not created...."<<endl;
        }   


    }

    void setArr(int index,int ele){

        if(index>=0 && index<this->size){
             arr[index]=ele;

        }

        else{
            cout<<"arr is out of the array size..!"<<endl;
        }
       
    }

    void getArr(){

        for(int i=0;i<this->size;i++){
            cout<<arr[i]<<endl;
        }
    }


};

int main(){

    collection <int> c1;

    c1.createArr(5);

    c1.setArr(0,11);
    c1.setArr(1,12);
    c1.setArr(2,13);
    c1.setArr(3,14);
    c1.setArr(4,15);

    c1.getArr();


    collection <float> c2;

    c2.createArr(4);
    c2.setArr(0,2.1);
    c2.getArr();





    return 0;
}

