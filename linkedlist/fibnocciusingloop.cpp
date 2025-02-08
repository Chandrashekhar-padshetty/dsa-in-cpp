#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1) return n;
    else return fib(n-1)+fib(n-2);
}
int main(){
    /*int cur=1;
    int prev=0;
    int n;
    cin>>n;
    n=n-2;
    cout<<prev<<" ";
    cout<<cur<<" ";
    while(n--){
       int ans=prev+cur;
        prev=cur;
       cur=ans;
      
       cout<<ans<<" ";


    }*/// using recursion
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    cout<<fib(i)<<" ";
   }
    system("pause");
}