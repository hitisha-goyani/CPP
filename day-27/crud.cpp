#include<iostream>
#include<vector>

using namespace std;



int main(){

    vector <int> arr;

    int size;
    int ele;
    cout << "enter size:";
    cin >> size;
    for(int i=0; i<size; i++){
        cout<<"arr["<<i<<"]:";
         cin>>ele;
         arr.push_back(ele);
}


    int choice;
    do{

        cout<<"enter your choice"<<endl;
        cout<<"press 1 for size method"<<endl;
        cout<<"press 2 for push  method"<<endl;
        cout<<"press 3 for pop method"<<endl;
        cout<<"press 4 for insert method"<<endl;
        cout<<"press 5 for find array position"<<endl;
        cout<<"press 6 for check array empty or not"<<endl;
       


        cout<<"entr your choice:"<<endl;
        cin>>choice;
        cout<<endl;

        if(choice>6){
            cout<<"choice not available;"<<endl;
            break;
        }

        switch(choice){

            case 1:

                cout<<arr.size()<<endl;

                break;


            case 2:
                    int element;
                    cout<<"enter element to push: "<<endl;
                    cin>>element;

                    cout<<endl;
                arr.push_back(element);
                for(int i=0; i<arr.size(); i++)
                {
                    cout << arr[i] << endl;
                }
                break;


            case 3:

                arr.pop_back();
                for(int i=0; i<arr.size(); i++)
                {
                    cout << arr[i] << endl;
                }
                break;

            case 4:
                int add;
                cout<<"enter insert element:"<<endl;
                cin>>add;
                arr.insert(arr.begin()+1,add);
                for(int i=0; i<arr.size(); i++)
                {
                    cout << arr[i] << endl;
                }
                break;

            case 5:
                int pos;
                cout<<"enter array poition"<<endl;
                cin>>pos;
                cout<<endl;
                cout<<arr.at(pos)<<endl;
                break;

            case 6:

               cout<<arr.empty()<<endl;
                break;

        }




    }while(choice!=0);

    return 0;
}