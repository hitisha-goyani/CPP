#include<iostream>

using namespace std;

class Stack{

    private:
    int *arr;
    int capacity;
    int size;
    int top;

    public:

    Stack(int capacity){
        this->capacity=capacity;
        arr = new int[capacity];
        size=0;
        top=-1;
    
    }

    ~ Stack(){
        delete[] arr;
    }

    void push(int ele){

        if(this->top < this->capacity){
           this->top++;
           this->arr[this->top]=ele;
           size++;
        }
        else{
          cout<<"stack is overflow.."<<endl;
            
        }
    }

    void pop(){

        if(this->top == -1){
            cout<<"stack is underflow";
        }
        else{

            this->top--;
            size--;
        }
    }

    void peek(){
        if(this->top == -1){
              cout<<"stack is underflow";
        }
        else{
            cout<<" | " <<this->arr[this->top]<<" | "<<endl;
            cout<<" ---- "<<endl;
        }
    }

    void isEmpty(){
        if(this->top == -1){
            cout<<"stack is empty..!"<<endl;
        }
        else{
            cout<<"stack is not empty..!"<<endl;
        }
    }

    void isFull(){
        if(this->top == this->capacity){
            cout<<"stack is full...!"<<endl;
        }
        else{
            cout<<"stack is not full...!"<<endl;
        }
    }

    void issize(){
        if(this->top == -1){
            cout<<"stack is overflow....!"<<endl;
        }
        else{

            cout<<"size:"<<size<<endl;
        }
    }

    void view(){
        if(this->top == -1){
            cout<<"stack is overflow...!"<<endl;
        }
        else{

            for(int i=this->top;i>=0;i--){
                cout<<" | "<<this->arr[i]<<" | "<<endl;
            }

            cout<<" ---- "<<endl;
        }
    }


};

int main(){



    int capacity;
    cout<<"enter capacity:";
    cin>>capacity;

        Stack Stack(capacity);

    
            int choice,ele;

    do{

            cout<<"press 1 for push"<<endl;
            cout<<"press 2 for pop"<<endl;
            cout<<"press 3 for peek"<<endl;
            cout<<"press 4 for is empty"<<endl;
            cout<<"press 5 for is full"<<endl;
            cout<<"press 6 for size"<<endl;
            cout<<"press 7 for view"<<endl;
            cout<<"press 0 for exit"<<endl;

            cout<<"choice:";
            cin>>choice;

            switch(choice){

                case 1:
                
                    cout<<"ele:";
                    cin>>ele;
                    Stack.push(ele);
                break;

                case 2:
                    Stack.pop();
                break;

                
                case 3:
                    Stack.peek();
                break;

                
                case 4:
                    Stack.isEmpty();
                break;

                
                case 5:
                    Stack.isFull();
                break;

                
                case 6:
                    Stack.issize();
                break;

                 case 7:
                    Stack.view();
                break;


                default:
                cout<<"enter valid choice";

                break;
            }




    }while(choice!=0);

    return 0;
}