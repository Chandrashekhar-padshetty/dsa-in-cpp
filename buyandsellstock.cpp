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
    int min=v[0];
    int p=0;
    int profit=0;
    for(int i=1;i<n;i++){
        p=v[i]-min;
        if(v[i]<min) min=v[i];
        profit=max(profit,p);
    }
    cout<<profit;
    system("pause");
}