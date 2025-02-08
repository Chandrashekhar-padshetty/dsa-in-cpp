#include<iostream>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int d){
         data=d;
        prev=NULL;
        next=NULL;

    }

};

node *insertathead(node *head, int d)
{
    if(head==NULL) return new node(d);
    node* temp=new node(d);
    temp->next=head;
     head->prev=temp;
    head=temp;
    return head;
}

void traversal(node*head){
    node* temp=head;
    if(temp==NULL){
         cout<<"empty";
         return;
    }
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    node *head=new node(5);
    head=insertathead(head,4);
     head=insertathead(head,5);
      head=insertathead(head,6);
       head=insertathead(head,7);
       traversal(head);
       system("pause");


}

