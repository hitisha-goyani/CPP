#include<iostream>

using namespace std;

class Node{

    public:
    int data;
    Node *left;
    Node *right;
};

int main(){

    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();

    node1->left=node2;
    node1->data=10;
    node1->right=node3;

    node2->left=NULL;
    node2->data=20;
    node2->right=NULL;


    cout<<node1->left<<" "<<node1->data<<" "<<node1->right<<endl;
    cout<<node2->left<<" "<<node2->data<<" "<<node2->right;



    return 0;
}