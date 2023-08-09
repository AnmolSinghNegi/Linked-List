
#include <iostream>
#include <array>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
int main(int argc, const char * argv[]) {
    int arr[7]={1,5,6,7,9,10,11};
    Node*head=nullptr;
    Node*temp=head;
    for(int i=0;i<7;i++){
        temp->data=arr[i];
        temp->next=head;
        head=temp;
    }
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
        
    }
    return 0;
}
