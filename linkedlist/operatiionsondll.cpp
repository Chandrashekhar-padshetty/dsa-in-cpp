// Online C++ compiler to run C++ program online
#include<iostream>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
   
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
node* delbyvalue(node * head, int value) {
    if (head == NULL) return nullptr; // If the list is empty

    node* temp = head;

    // Case 1: Deleting the head node
    if (head->data == value) {
        head = head->next;
        if (head != NULL) { // If the list has more than one element
            head->prev = NULL;
        }
        delete temp; // Free the memory of the old head
        return head;
    }

    // Case 2: Deleting a non-head node
    node* pre = NULL;
    while (temp != NULL && temp->data != value) {
        pre = temp;
        temp = temp->next;
    }

    if (temp != NULL) { // If the node with the given value is found
        pre->next = temp->next;
        if (temp->next != NULL) { // If it's not the last node
            temp->next->prev = pre;
        }
        // Disconnect the node to be deleted
        temp->next = NULL;
        temp->prev = NULL;
        delete temp; // Free the memory
    }

    return head;
}
node * insertatpos(node * head,int k,int v){
    if(head==NULL) return new node(v);
    node *temp=head;
    if(k==1){
        node* newnode=new node(v);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return head;
    }node * pre=NULL;
    int cnt=1;
    while(temp!=NULL){
        cnt ++;
       
        if(k==cnt){
            node* newnode=new node(v);
            newnode->next=temp;
            temp->prev=newnode;
            if(pre!=NULL){
            pre->next=newnode;
            newnode->prev=pre;
            }
            break;
            
        }
        pre=temp;
        temp=temp->next;
    }
    return head;
}


    int main(){
        node* head;
        node* tail=head;
        int arr[5]={1,2,3,44,55};
       head=arrtodll(tail,arr,5);
        traversal(head);
        head=insertatpos(head,4,4);
       
        traversal(head);
        system("pause");

        

}
   

    




       

    