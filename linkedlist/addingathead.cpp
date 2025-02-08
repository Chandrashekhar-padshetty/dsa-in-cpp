#include<iostream>
#include<algorithm>

using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=nullptr;
    }

};
void addingathead(node* &head,int d){
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}
void traverse(node*& head){
    node* current=head;
    while(current!=nullptr){
        cout<<current->data<<endl;
        current=current->next;
    }
}
int main(){
    node*head=new node(10);
    
    addingathead(head,151);
    addingathead(head,150);
    addingathead(head,112);
    addingathead(head,16);
    addingathead(head,1);
    traverse(head);
    
    system("pause");
    return 0;
}