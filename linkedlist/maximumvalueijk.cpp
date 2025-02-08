#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i,j,k,ans;
    i=0;
    j=i+1;
    k=i+2;
    if(v[i]<v[j]&&v[j]<v[k]) {
        ans=v[i]-v[j]+v[k];

    }
    int cnt=INT_MIN;
    while(k<n){
        if(v[i]<v[j]&&v[j]<v[k]) {
        cnt=v[i]-v[j]+v[k];
        ans=max(cnt,ans);
       

    }
     k++;
        i++;
        j++;
    }
    cout<<ans;
    system("pause");

    }



