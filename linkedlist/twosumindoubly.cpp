#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node* prev;
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;

    }

};
node* insert(node* head,int d){
    if(head==NULL){
        
        return new node(d);
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* n=new node(d);
    temp->next=n;
    n->prev=temp;
    return head;
}
void p(node* head,int sum){
    node* temp=head;
    if(head==NULL){
        cout<<"list is empty";
    }
    int n=0;
    while(temp!=NULL){
        node* k=temp->next;
        while(k!=NULL){
            if(k->data+temp->data==sum){
                n=1;
                cout<<temp->data<<" "<<k->data<<endl;
                

            }
            k=k->next;
        }
        temp=temp->next;
    }
    if(n==0) cout<<"No pairs found";
}
int main(){
    node* head=NULL;
    head=insert(head,5);
    head=insert(head,3);
    head=insert(head,4);
    head=insert(head,5);
    head=insert(head,3);
    head=insert(head,2);
    p(head,8);
    system("pause");




}