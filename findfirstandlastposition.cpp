#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int t;
    cin>>t;
    int h= n-1;
     int mid;
    while(l<=h){
       mid=l+(h-l)/2;
        if(arr[mid]>=t){
            h=mid-1;
           
        }else{
            l=mid+1;
        }
    }
    cout<<mid;

    system("pause");

}
