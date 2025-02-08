#include<iostream>
#include<algorithm>

using namespace std;
class node{
    public:
    int min;
    int value;
    node* next;

};
class minstack{
    private:
    node* top=NULL;
    public:
    
    void push(int val){
        node* n=new node();
        if(top==NULL){
            n->min=val;
            n->value=val;
            n->next=NULL;
            top=n;
        }else{
            if(val<top->min){
                n->min=val;
                n->value=val;
                n->next=top;
                top=n;
            }
        }

    }
    void pop(){
        if(top!=NULL){
            node* temp=top;
            top=top->next;
            delete temp;
        }
    }
    int to(){
        if(top!=NULL) return top->value;
    }
    int getmin(){
        if(top!=NULL) return top->min;
    }

};
int main(){
    minstack mn;
    mn.push(5);
    mn.push(9);
    mn.push(10);
    mn.pop();
    mn.getmin();
    mn.to();
    system("pause");

}