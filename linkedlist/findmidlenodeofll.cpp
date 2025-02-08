#include<iostream>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node *prev=NULL;
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }

};
node* arrtodll(node *&tail,int arr[],int n){
    if(n==0) return tail;
    
    node*head=tail;
    tail->data=arr[0];
    for( int i=1;i<n;i++){
        node* temp=new node(arr[i]);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;

    }
    return head;
}
void traversal(node*head){
    node* current=head;
    while(current!=NULL){
        cout<<current->data<<endl;
        current=current->next;
    }
}// using one fast pointer and one slow pointer 
node* middle(node * head){
    node* fast=head;
    node* slow=head;
    if(head==NULL&&head->next==NULL) return head;
    while(fast->next!=NULL||fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;


}
int main(){
        node* head;
        node* tail=head;
        int arr[5]={1,2,3,44,55};
       head=arrtodll(tail,arr,5);
        traversal(head);
       
       
        node* ans=middle(head);
        cout<<ans->data;
        system("pause");

        

}