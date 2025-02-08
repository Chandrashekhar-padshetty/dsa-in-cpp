#include<iostream>
#include<algorithm>

using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int data){
        this->data=data;
        next=nullptr;
        prev=NULL;
    }

};
node* insertend(node* head,int d){
    node*temp=head;
    if(head==NULL) return new node(d);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* newnode=new node(d);
    temp->next=newnode;
    newnode->prev=temp;
    return head;
}
void traversal(node* head){
    node* temp=head;
    if(head==NULL) return ;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* head=new node(9);
    head=insertend(head,5);
    traversal(head);
    system("pause");

}