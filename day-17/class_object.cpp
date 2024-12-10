#include<iostream>
using namespace std;


class Student{

    public:
    int rollno;
    char name[100];
    char city[100];
    int mobileno;    
};
int main(){

    int size;
    cout<<" no of student:";
    cin>>size;

    Student s1[size];

    for(int i=0;i<size;i++){
        s1[i].rollno;
        s1[i].name;
        s1[i].city;
       

        cout<<"student["<<i<<"].rollno:";
        cin>>s1[i].rollno;
        cout<<"student["<<i<<"].name:";
        cin>>s1[i].name;
        cout<<"student["<<i<<"].city:";
        cin>>s1[i].city;
        cout<<endl;
    }

    cout<<endl;

    cout<<"rollno"<<" "<<" name "<<" "<<" city"<<endl;
    cout<<"--------------------------------"<<endl;

    for(int i=0;i<size;i++){

         cout << "  " <<  s1[i].rollno << "  " ;
        cout << "  " <<  s1[i].name << "  " ;
        cout << "  " <<  s1[i].city <<  "  " <<endl;
       
    }


    return 0;
}