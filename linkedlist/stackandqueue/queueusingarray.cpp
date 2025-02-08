#include<iostream>
#include<algorithm>
using namespace std;
class Q{
    
    public:
    

    int start=-1,end=-1,queue[10],cursize=0;
    void push (int x){
        if(cursize==10)    {
            cout<<"queue is full";
        return;
        }
        if(end==-1){
            start=0;
            end=0;
            queue[end]=x;
            cursize++;
        
        }else{
         end=(end+1)%10;
            queue[end]=x;
           
            cursize++;

        }

    }
    int pop(){
        int el;
        if(cursize==1){
             el=queue[start];
            start=-1;
            end=-1;
            cursize--;
            return el;
        }
        if(cursize==0){
            cout<<"empty";
            
            return -1;
        }else{
             el=queue[start];
            start=(start+1)%10;
            cursize--;
            return el;
        }
        
    }
    int top(){
        if(start==-1){
            cout<<"queue is empty";
        
        }
        return queue[start];
    }
    int size(){
        return cursize;
    }
    void display(){
        if(start==-1){
            cout<<"it is empty";
            return ;
        }else{
            int i=start;
            while(i!=end+1){
                cout<<queue[i]<<endl;
                i++;
            }
            return;


            
        }
    }

};
int main(){
    Q s;
    s.push(5);
    s.push(6);
    s.push(4);
    s.push(6);
    s.push(55);
    s.pop();
    s.pop();
    
    s.pop();
    s.display();
    
    
    
    system("pause");

}