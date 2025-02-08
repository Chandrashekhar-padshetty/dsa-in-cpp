#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int gas[n];
    for(int i=0;i<n;i++){
        cin>>gas[i];
    }
    int cost[n];
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        if(gas[i]>=cost[i]){
            sum+=gas[i];
            int k=i+1;
            while(k!=i){
                sum+=gas[k]-cost[k];
            }
            

        }
    }

}