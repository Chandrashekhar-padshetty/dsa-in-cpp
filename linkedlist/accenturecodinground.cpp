#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int s(string s){
    if(s.length()==0) return -1;
    int sum=0;
   if(s[1]=='A') sum=(int)s[0]&(int)s[2];
   else if(s[1]=='B')  sum=(int)s[0]|(int)s[2];
   else{
     sum=(int)s[0]^(int)s[2];
   }
   for(int i=4;i<s.length();i+=2){
    if(s[i-1]=='A') sum=sum&(int)s[i];
   else if(s[i-1]=='B')  sum=sum|(int)s[i];
   else{
     sum=sum^(int)s[2];
   }

   }
   return sum;
}

int main(){
    string st;
    getline(cin,st);
    cout<<s(st);


    system("pause");

}