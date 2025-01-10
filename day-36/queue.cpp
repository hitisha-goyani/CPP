#include<iostream>

using namespace std;

class Queue{

    private:
    int *arr;
    int size;
    int cap;
    int front;
    int rear;

    public:

    Queue(int cap){

        this->cap=cap;
        this->arr = new int(cap);
        this->size = 0;
        this->front=-1;
        this->rear=-1;
    }

    void Enqueue(int ele){

        if(this->front == -1 && this->rear == -1){

            this->front=0;
            this->rear=0;
            this->arr[this->rear] = ele;
            size++;
        }

        else if(size == this->cap){
            cout<<"queue is overflow..!"<<endl;

        }
        else{
            this->rear++;
            this->arr[this->rear] = ele;
            size++;
        }
        }

        void Dequeue(){
            if(this->front == -1 && this->rear == -1){
                cout<<"queue is empty..!"<<endl;
            }
            else if(this->front == this->rear){
                this->front=-1;
                this->rear=-1;
                size--;
            }
            else{
                 this->front++;
                this->arr[this->front];
                size--;

            }
        }
        void Front(){
             if(this->front == -1 && this->rear == -1){
                cout<<"queue is empty..!"<<endl;
            }
            else{
                cout<<this->arr[this->front]<<endl;
            }

        }
        void Rear(){
             if(this->front == -1 && this->rear == -1){
                cout<<"queue is empty..!"<<endl;
            }
            else{
                cout<<this->arr[this->rear]<<endl;
            }

        }
        void isEmpty(){
             if(this->front == -1 && this->rear == -1){
                cout<<"queue is empty..!"<<endl;
             }
             else{
                cout<<"queue is not empty..!"<<endl;
             }
        }
        void isFull(){
             if(size == this->cap){
                cout<<"queue is FULL..!"<<endl;
             }
             else{
                cout<<"queue is not FULL..!"<<endl;
             }
        }
        void Size()
        {
            cout<<"size:"<<size<<endl;
        }



    void display(){
        if(this->front == -1 && this->rear == -1){
            cout<<"queue is underflow....!"<<endl;
        }
        else{
            for(int i=this->front;i<=this->rear;i++){
                cout<<this->arr[i]<<" ";

            }
            cout<<endl;
        }
    }


};

int main(){

    int cap;
    cout<<"capacity:";
    cin>>cap;

    Queue Queue( cap);

    int choice,ele;

    do{
          cout<<"press 1 for enqueue"<<endl;
            cout<<"press 2 for  dequeue"<<endl;
            cout<<"press 3 for front"<<endl;
            cout<<"press 4 for rear"<<endl;
            cout<<"press 5 for is empty"<<endl;
            cout<<"press 6 for is full "<<endl;
            cout<<"press 7 for size"<<endl;
            cout<<"press 8 for display "<<endl;
            cout<<"press 0 for exit"<<endl;

            cout<<"choice:";
            cin>>choice;

            switch(choice){

                case 1:
                
                    cout<<"ele:";
                    cin>>ele;
                    Queue.Enqueue(ele);
                break;

                case 2:
                Queue.Dequeue();
                     
                break;

                
                case 3:
                 Queue.Front();

                    
                break;

                
                case 4:
                Queue.Rear();
                  
                break;

                
                case 5:
                      Queue.isEmpty();
                 
                break;

                
                case 6:
                      Queue.isFull();
                   
                break;

                 case 7:
                       Queue.Size();
                   
                break;
                case 8:
                     Queue.display();
                break;


                default:
                cout<<"enter valid choice";

                break;
            }



    }while(choice!=0);

return 0;
}