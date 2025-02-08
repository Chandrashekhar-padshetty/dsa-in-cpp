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
int main(){
    node *head=new node(10);
    cout<<head->data;
    cout<<endl;
    cout<<head->next;
    
    system("pause");
    return 0;
}