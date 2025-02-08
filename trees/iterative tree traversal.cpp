#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
void inorder(node* root){
    stack<node*>st;
    st.push(root);
    while(!st.empty()){
        node* n=st.top();
        st.pop();
        cout<<n->data;
        if(n->right!=NULL) st.push(n->right);
        if(n->left!=NULL) st.push(n->left);
    }
}
int main(){
    node* root=new node(5);
    node* n=new node(5);
    root->left=n;
    n=new node(6);
    root->right=n;
      n=new node(7);
    root->left->left=n;
  n=new node(9);
        root->left->right=n;
        inorder(root);
        system("pause");

    




}