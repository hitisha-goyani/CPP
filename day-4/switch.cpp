#include<iostream>
using namespace std;
int main(){

int a;
cout<<"menu:"<<endl;
cout<<"press 1 for pizza"<<endl;
cout<<"press 2 for sandwich"<<endl;
cout<<"press 3 for burger"<<endl;
cout<<"press 4 for pasta"<<endl;
cout<<"enter your choice:";
cin>>a;
cout<<endl; 

switch(a){

case 1:
    cout<<"your ordered pizza now choose the type:"<<endl;
    cout<<"press 1 for onion pizza"<<endl;
    cout<<"press 2 for margaritta"<<endl;
    cout<<"press 3 for sweet corn"<<endl;
    cout<<"press 4 for garlic "<<endl;
    int b;
    cout<<"enter pizza type:";
    cin >> b;
    cout << endl;

                        switch(b){
                            case 1:
                                cout << "you ordered oninon pizza" << endl;
                                break;
                            case 2:
                                cout << "you ordered Margaritta" << endl;
                                break;
                            case 3:
                                cout << "you ordered Cheese bursth" << endl;
                                break;
                            case 4:
                                cout << "you ordered sweet corn pizza" << endl;
                                break;
                            default:
                                cout << "this pizza type is not available" << endl;
                                break;
                        }


            break;
        case 2 :
            cout << "your Ordered Burger now choose the type:"<<endl;
            cout<<"press 1 for cheese"<<endl;
            cout<<"press 2 for double cheese"<<endl;
            cout<<"press 3 for veg"<<endl;
            cout<<"press 4 for double layer burger"<<endl;
            int c;
            cout<<"enter burger type:";
            cin>>c;
            cout<<endl;
            switch(c){
                            case 1:
                                cout << "you ordered cheese" << endl;
                                break;
                            case 2:
                                cout << "you ordered double cheese" << endl;
                                break;
                            case 3:
                                cout << "you ordered veg" << endl;
                                break;
                            case 4:
                                cout << "you ordered double layer burger" << endl;
                                break;
                            default:
                                cout << "this burger type is not available" << endl;
                                break;
                        }



            break;
        case 3 :
            cout << "your Ordered Sandwich now choose the type:";
             cout<<"press 1 for toster sandwich"<<endl;
            cout<<"press 2 for veg grill sandwich"<<endl;
            cout<<"press 3 for vegitable sandwich"<<endl;
            cout<<"press 4 for cheese sandwich"<<endl;
            int d;
            cout<<"enter burger type:";
            cin>>d;
            cout<<endl;
            switch(d){
                            case 1:
                                cout << "you ordered toster sandwich" << endl;
                                break;
                            case 2:
                                cout << "you ordered veg grill sandwich" << endl;
                                break;
                            case 3:
                                cout << "you ordered vegitable sandwich" << endl;
                                break;
                            case 4:
                                cout << "you ordered cheese sandwich" << endl;
                                break;
                            default:
                                cout << "this burger type is not available" << endl;
                                break;
                        }

            break;
        case 4 :
            cout << "your Ordered pasta now choose the type:"<<endl;
             cout<<"press 1 for masala pasta"<<endl;
            cout<<"press 2 for cheese pasta"<<endl;
            cout<<"press 3 for white sos pasta"<<endl;
            cout<<"press 4 for white cheese pasta"<<endl;
            int e;
            cout<<"enter burger type:";
            cin>>e;
            cout<<endl;
            switch(e){
                            case 1:
                                cout << "you ordered masala pasta" << endl;
                                break;
                            case 2:
                                cout << "you ordered cheese pasta" << endl;
                                break;
                            case 3:
                                cout << "you ordered white sos pasta" << endl;
                                break;
                            case 4:
                                cout << "you ordered white cheese pasta" << endl;
                                break;
                            default:
                                cout << "this pasta type is not available" << endl;
                                break;
                        }
            break;
        default :
            cout << "your order is not on menu";
            break;
    }
    return 0;


}

