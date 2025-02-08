#include<iostream>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }

};
void insert(node *&tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;

}
void traversal(node*head){
    node* current=head;
    while(current!=NULL){
        cout<<current->data<<endl;
        current=current->next;
    }
}
node* deleteatpos(node*head,int k){
    if(head==NULL){
        return head;
    }
    int count=0;
    node *temp=head;
    node* prev=NULL;
    if(k==1){
        head=head->next;
        return head;
    }
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=temp->next;
            delete temp;
            break;

        }
        prev=temp;
        temp=temp->next;
    }
    return head;
    
}
node* arrayinsert(node* tail,int arr[5],int n){
    for(int i=0;i<n;i++){
        node* temp=new node(arr[i]);
        tail->next=temp;
        tail=temp;

    }
    return tail;
}
node *insertatanypos(node *head,int k,int value){
    if(head=NULL) return new node(value);
    if(k==1){
        node* temp=new node(value);
        temp->next=head;
        head=temp;
        return head;
    }
    int count=0;
    node *temp=head;
    while(temp!=NULL)
    { count++;
    if(count==k-1){
        node* newnode=new node(value);
        newnode->next=temp->next;
        temp->next=newnode;
        break;
    }
    temp=temp->next;
    

        
    }
    return head;
}
int lengthofll(node* head){
    node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;

}
node* midofll(node*head){
    int length=lengthofll(head);
    int cnt=1;
    if(head=NULL) return NULL;





    if(length==1) return head;

    node* temp=head;
    while(cnt<length/2){
        temp=temp->next;
        cnt++;

    }
    return temp->next;
    

}
node* nthnodefromend(node * head,int n){
int len=lengthofll(head)-n;
node * temp=head;
int cnt=1;
if(lengthofll(head)==1) return head;
while(cnt<=len){
temp=temp->next;
cnt++;
}
return temp;

}
// search the node with given value
int searchnode(node * head,int value){
    node* temp=head;
    int ans=-1;
    int cnt=1;
    while(temp!=NULL&&temp->data!=value){
        temp=temp->next;
        ans=1;
        cnt++;
    }
    if(ans==1)
    return cnt;
    else{
        return -1;
    }
}
node * deletenodebyvalue(node* head,int value){
    node * temp=head;
    if(head==NULL) return NULL;
    if(head->data==value){
        node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    
    node*prev=NULL;
    while(temp!=NULL&&temp->data!=value){
        prev=temp;
        temp=temp->next;
    }
    if(temp!=NULL){
    prev->next=temp->next;
    delete temp;
    

    }
    return head;
    
}
// brute force solution
struct node* seperateoddandeven(node* head){
     node* current=head;
     if(head==NULL) return NULL;
     if(head->next==NULL){
        return head;
     }
     node* temp=new node(head->data);
     node* re=temp;
     while(current!=NULL&&current->next!=NULL){
        node * tem=new node(current->data);
        temp->next=tem;
        temp=tem;

        current=current->next->next;
     }
     if(current){
        node * tem=new node(current->data);
        
        temp->next=tem;
        temp=tem;

     }
     current=head->next;
     while(current!=NULL&&current->next!=NULL){
        node * tem=new node(current->data);
        current=current->next->next;
        temp->next=tem;
        temp=tem;
     }
     if(current){
        node * tem=new node(current->data);
        
        temp->next=tem;
        temp=tem;

     }
    return re;

}
// optimal solution 
node* optimalseperate(node* head){
    node* temp=head;
    while(temp!=NULL&&temp)
}




int main(){
    node* head=new node(10);
    node*tail=head;
    insert(tail,67);
insert(tail,57);
insert(tail,87);
insert(tail,77);
insert(tail,7);



cout<<"before seperating";
traversal(head);
cout<<"after";

traversal(head);






 /*   
int n;
cout<<"print nth node";
cin>>n;

    node* ans=nthnodefromend(head,n);
    cout<<ans->data;
  */  



   
    system("pause");
    



}