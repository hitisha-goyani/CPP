#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    cout<<endl;

    cout<<"press 1 for update"<<endl;
    cout<<"press 2 for delete"<<endl
    ;

    int choice;
    cout<<"enter choice:";
    cin>>choice;

    switch(choice){

        case 1:
            int update_pos;
            int update_ele;
            cout<<"position to update:";
            cin>>update_pos;
            cout<<"enter element to update:";
            cin>>update_ele;

            arr[update_pos]=update_ele;
            cout<<endl;

            for(int i=0;i<5;i++){
                cout<<arr[i]<<" ";
            }
            break;

            case 2:
            int delete_pos;
            cout<<"enter delete position:";
            cin>>delete_pos;

            for(int i=delete_pos;i<5;i++){
                arr[i]=arr[i+1];
            }
            cout<<endl;
            for( int i=0;i<5-1;i++){
                cout<<arr[i]<<" ";

            }
            cout<<endl;
        cout<<endl;
        break;
    }
    return 0;
}
