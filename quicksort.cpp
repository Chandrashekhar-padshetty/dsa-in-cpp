#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int pivotindex(vector<int>&arr,int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j){
        while(pivot>=arr[i]&&i<=high+1){
            i++;
        }
        while(pivot<=arr[i]&&j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
        swap(arr[low],arr[j]);
       
        
    }
     return j;


}
void quicksort(vector<int>&arr,int low,int high){
    if(low<high){
    int n=high;
    int p=pivotindex(arr,low,high);
    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);
    }
    
    




}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
quicksort(arr,0,n-1);
cout<<"after sorting";
    for(int i=0;i<=n;i++){
        cout<<arr[i];
    }

    system("pause");


}