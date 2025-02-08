#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1,1);
    v[0]=0;
    v[1]=0;
    for(int i=2;i<=n;i++){
        if(v[i]==1){
            for(int j=i*i;j<=n;j+=i){
                v[j]=0;
            }
        }
    }
    int k=1;
    for(int i=2;i<=n/2;i++){
        if(v[i]==1&&v[n-i]==1){
            cout<<"yes";
            k=0;
            break;
        }
    }
    if(k!=0) cout<<"No";
    system("pause");


}