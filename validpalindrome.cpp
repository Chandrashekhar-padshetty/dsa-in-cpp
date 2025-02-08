#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string k="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z') k+=s[i];
        else if(s[i]>='A'&&s[i]<='Z') k+=(s[i]-'A')+'a';
        else if(s[i]>='0'&&s[i]<='9') k+=s[i];
    }
    cout<<k;
    int j=k.size()-1;
    int m=0;
    int ans=0;
    while(m<j){
        if(k[m]!=k[j]) {
            ans=1;
            break;
        }
        m++;
        j--;
    }
    if(ans==1) cout<<"Not palindrome";
    else{
        cout<<"palindrome";
    }
    system("pause");
}