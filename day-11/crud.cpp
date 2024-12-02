#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"enter size:";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){

    cout<<"arr["<<i<<"]:";
    cin>>arr[i];
    }

    cout<<"array = [";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    cout<<endl;

    int choice;

    do{

        cout<<"press 1 for insertion"<<endl;
        cout<<"press 2 for update"<<endl;
        cout<<"press 3 for delete"<<endl;
        cout<<"press 4 for read"<<endl;

        cout<<endl;

        cout<<"choice:";
        cin>>choice;

        switch(choice){

            case 1:
                int pos_insert;
                int ele_insert;
                cout<<"position insert:";
                cin>>pos_insert;
                cout<<"element insert:";
                cin>>ele_insert;

                for(int i=size;i>pos_insert;i--){
                    arr[i]=arr[i-1];
                }

                arr[pos_insert]=ele_insert;
                size++;

                cout<<"element insert suceessful.....!"<<endl;
                
                cout << "array = [ "; 
                for(int i=0; i<size; i++){
                    cout << arr[i] << " ";
                }
                cout << "]";

                cout << endl;

            
            break;

            case 2:

                    int pos_update;
                    int ele_update;
                    cout<<"update position:";
                    cin>>pos_update;
                    cout<<"update element:";
                    cin>>ele_update;
                    arr[pos_update]=ele_update;
                    cout<<"element update suceessfully...!"<<endl;

                     cout << "array = [ "; 
                    for(int i=0; i<size; i++){
                        cout << arr[i] << " ";
                    }
                    cout << "]";

                    cout << endl;
            break;

            case 3:
                int del_pos;
                cout<<"del_pos:";
                cin>>del_pos;

                for(int i=del_pos;i<size;i++){
                    arr[i]=arr[i+1];
                }
                size--;

                cout<<"element Deleted sucessfully..!"<<endl;

                 cout<<"array = [";
                for(int i=0;i<size;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<"]";
                cout<<endl;


            break;


            case 4:

                cout<<endl;
                cout<<"array = [";
                for(int i=0;i<size;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<"]";
                cout<<endl;
            break;

            default:
            break;
        }


    }while(choice !=0);

return 0;
}