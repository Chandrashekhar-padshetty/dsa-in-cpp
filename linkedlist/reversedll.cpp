// Online C++ compiler to run C++ program online
#include<iostream>
#include<algorithm>
#include<stack>
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
}
// reverse using brute force approach
node * reverseusingstack(node * head){
    stack<int>s;
    node * current=head;
    while(current!=NULL){
        s.push(current->data);
        current=current->next;
    }
    current=head;
    while(current!=NULL){
        current->data=s.top();
        s.pop();
        current=current->next;
    }
    return head;
}
// reverse using optimal approach
node* reverse(node * head){
    node * current=head;
    node * temp=NULL;
    if(head==NULL||head->next==NULL){
        return head;
    }
    while(current!=NULL){
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
    return temp->prev;
}
int main(){
        node* head;
        node* tail=head;
        int arr[5]={1,2,3,44,55};
       head=arrtodll(tail,arr,5);
        traversal(head);
        cout<<"after reverse";
        head=reverse(head);
        
        traversal(head);
        system("pause");

        

}