
    
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
bool balance(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }else{
            if(st.empty()) return 0;
            if(s[i]==')'){
                if(st.top()=='(') st.pop();
                else {
                    return 0;
                }
            }
            if(s[i]==']'){
                if(st.top()=='[') st.pop();
                else return 0;
            }
             if(s[i]=='}'){
                if(st.top()=='{') st.pop();
                else return 0;
            }
        }
    }
    return st.empty();


}
int main(){
    string s;
    cout<<"enter the string";
    getline(cin,s);
    if(balance(s)){
        cout<<"balanced parenthesis";
    }else{
        cout<<"unbalanced parenthesis";
    }
    system("pause");

}