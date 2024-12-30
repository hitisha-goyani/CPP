#include<iostream>
#include<vector>

using namespace std;

class collection{

    private:

    vector<int> arr;

    public:

    void add(int a){
        arr.push_back(a);
        cout<<"element added sucessfully..."<<endl;

    }

    void removeElement(){
        arr.pop_back();
        cout<<"element remove sucessfully.."<<endl;

    }
     void print(){
       for(int e:arr){
        cout<<e<<" ";
       }

    }

    void insertElement(int i){
        arr.insert(arr.begin()+1,i);
        cout<<"element inserted successfully.."<<endl;

    }

    void eraseElement(int in){
        arr.erase(arr.begin()+in);
        cout<<"elememt deleted successfully...."<<endl;
    }
    void pos(int i){
        cout<<arr.at(i)<<endl;

    }
    void clearElement(){
        arr.clear();
        cout<<"all element clear successfully..."<<endl;
    }
    void first(){
       cout<< arr.front()<<endl;
    }
    void last(){
       cout << arr.back()<<endl;
    }
    

};

int main(){

    int ele;
    int index;
    int pos;

    collection obj;

   
    int choice;


    do{

        cout<<"-------------*****-------------"<<endl;
        cout<<"press 1 for add element"<<endl;
        cout<<"press 2 for remove last element"<<endl;
        cout<<"press 3 for show element"<<endl;
        cout<<"press 4 for insert element"<<endl;
        cout<<"press 5 for delete element"<<endl;
        cout<<"press 6 for find element by position"<<endl;
        cout<<"press 7 for clear all element"<<endl;
        cout<<"press 8 for show first element"<<endl;
        cout<<"press 9 for show end element"<<endl;

        cout<<"enter your choice:";
        cin>>choice;

        switch(choice){
            

            case 1:
                cout<<"enter element:";
                cin>>ele;
                obj.add(ele);
            break;


             case 2:
                obj.removeElement();
            break;

            case 3:
                obj.print();
                cout<<endl;
            break;


             case 4:
                cout<<"enter element";
                cin>>ele;
                obj.insertElement(ele);
            break;


            case 5:
                cout<<"enter delete:";
                cin>>index;
                obj.eraseElement(index);
            break;


             case 6:
                cout<<"enter position :";
                cin>>index;
                obj.pos(index);
                
            break;

             case 7:
               
                obj.clearElement();
                
            break;
            case 8:
               
                obj.first();
                
            break;
             case 9:
               
                obj.last();
                
            break;



              default :
                cout<<"enter valid choice:";
             
            break;
        }




    }while(choice!=0);




    return 0;

}
