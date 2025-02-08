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
class Q{
    public:
    node* start=NULL;
    node* end=NULL;
    int cursize=0;
    void push(int x){
        if(start==NULL){
            node *newnode=new node(x);
            start=newnode;
            end=start;
            cursize++;


        }else{
            node *newnode=new node(x);
            end->next=newnode;
            end=newnode;
            cursize++;

        }

    }
    void pop(){
        if(start==NULL) cout<<"empty";
        else{
            node* temp=start;
            start=start->next;
            delete temp;
            cursize--;
        }
    }
    void display(){
        if(start==NULL) cout<<"empty";
        else{
            node* temp=start;
            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }
        
    }
    int size(){
        return cursize;
    }
    int topelement(){
        if(start==NULL) cout<<"empty";
        else{
            return start->data;
        }

    }




};
int main(){
    Q queue;
    
    queue.push(4);
    queue.push(40);
    queue.push(48);
    queue.push(49);
    queue.push(49);
    queue.push(47);
    queue.pop();
    queue.pop();
    queue.pop();
   
    queue.pop();
     queue.pop();
      cout<<queue.topelement();
    system("pause");

    




}