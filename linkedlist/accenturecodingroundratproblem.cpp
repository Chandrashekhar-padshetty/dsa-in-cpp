#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,unit,n;
    cin>>r>>unit>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=arr[0];
    for(int i=0;i<n;i++){
        if(sum>=r*unit) {
            cout<<i+1;
            break;
        }else{
            sum+=arr[i];
        }
    }
    system("pause");

}