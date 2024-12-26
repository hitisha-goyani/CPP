#include<iostream>
using namespace std;


class myClass{

    private:

    int size;
    int *arr;

    public:

    myClass(int size){
        this->size = size;
        arr = new int[this->size];

        if(arr ==NULL){
            cout<<"memory alloaction is failed.."<<endl;
        }
        else{
               cout<<"memory alloaction is successfully.."<<endl;
        }     

    }

    ~myClass(){
        delete[] arr;
        arr=NULL;
        if(arr==NULL){
            cout<<"memory deallocation is successfully.."<<endl;
        }
        else{
            cout<<"memory deallocation is failed.."<<endl;
        }
    }

    void setelement(int index,int ele)
    {
        if(index >=0 && index < this->size){
            arr[index] = ele;
            cout<<"element added successfully..!"<<endl;
        }
        else{
            cout<<"Error:index is out of arr size..!"<<endl;
        }
    }

    void getelement(int index){

        if(index>=0 && index < this->size){
            cout << "element of arr in dma: " << arr[index] << endl;
        }
        else{
            cout << "error: index is out of arr size.. !" << endl;
        }

     }
};

int main(){

myClass obj(5);
int ele;
for(int i=0; i<5; i++){
cin >> ele;
obj.setelement(i, ele);
ele = 0;
}

obj.getelement(1);

    return 0;
}