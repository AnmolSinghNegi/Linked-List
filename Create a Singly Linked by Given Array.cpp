#include <iostream>
#include <array>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data_){
        data=data_;
    }
};
int main(int argc, const char * args[]) {
    int arr[7]={1,5,6,7,9,10,11};
    Node*head=nullptr;
    Node*temp=nullptr;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        Node*newnode=new Node(arr[i]);
        if(head==nullptr){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }

    }
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    return 0;
}
