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
class STACK{
    public:
    node* top=NULL;
    int cursize=0;
    void push(int x){
        if(top==NULL){
            node* newnode=new node(x);
            top=newnode;
            cursize++;

        }else{
        node* newnode=new node(x);
        newnode->next=top;
        top=newnode;
        cursize++;
        }

        
    }
    void pop(){
        if(top==NULL) cout<<"stack is already empty";
        else{
        node* temp=top;
        top=top->next;
        delete temp;
        cursize--;
    }
    }
    void display(){
        if(top==NULL) cout<<"stack is already empty";
        else{
            node*temp=top;
            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }
    }
        int size() {

            return cursize;
        }
        int topelement(){
            if(top==NULL) cout<<"empty";
            else{
                return top->data;
            }
        }

    

};
int main(){
    STACK s;
    s.push(5);
    s.push(9);
    s.push(3);
    s.push(5);
    s.push(8);
    s.pop();
    s.pop();
    s.display();
    cout<<s.topelement()<<endl;
   
    int c=s.size();
    cout<<c;
     system("pause");


    return 0;
}