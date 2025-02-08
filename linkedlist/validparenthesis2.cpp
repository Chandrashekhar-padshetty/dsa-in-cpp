#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>st;
    string s;
    getline(cin,s);
    int cnt=0;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){// push if open bracket we got
            
            st.push(s[i]);
        }else{
            if(!st.empty()&&st.top()=='('){// check is there close bracket for any open bracket
                cnt+=2;// if got do like this
                ans=max(ans,cnt);// compare with intial ans and new count and store in max
                st.pop();

            }else{
                cnt=0;// if we not corresponding bracket or stack is empty and we got closing bracket than we have make cnt=0
            }
        }
    }
    cout<<ans;
    system("pause");

}