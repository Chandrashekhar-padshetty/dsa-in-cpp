#include<iostream>
#include<algorithm>
using namespace std;
class STACK{
    public:
    int top=-1,cursize=0,stack[10];
    void push(int x){
        if(top==10) {
            cout<<"stack is full";
        }
        if(top==-1){
            top=0;
            stack[top]=x;
            cursize++;
        }else{
            top++;
            stack[top]=x;
            cursize++;
        }
    }
    int pop(){
        int e;
        if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
        if(cursize==1){
            e=stack[top];
            top=-1;

        }else{
            e=stack[top];
            top--;
        }
    
    return e;
    }
    int topeed(){
        if(top==-1){
            cout<<"stack is empty";
            
        }
        else{
            return stack[top];
        }
    }
    int size(){
        return cursize;
    }
    void display(){
        if(top==-1){
            cout<<"stack is empty";
            
        }else{
            int i=top;
            while(i!=-1){
                cout<<stack[i]<<endl;
                i--;
            }
        }
    }

};
int main(){
    STACK s;
    s.push(6);
     s.push(7);
      s.push(9);
       s.push(8);
        s.push(5);
         s.push(3);
         cout<<"popped element is"<<s.pop()<<endl;
         
         s.display();
         system("pause");

    return 0;
}