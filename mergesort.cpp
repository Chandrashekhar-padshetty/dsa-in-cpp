#include<iostream>
#include<algorithm>

using namespace std;
void mergesort(int arr[],int low,int high)
{   if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);


}
void merge(int arr[],int low,int mid,int high) {
    int i=low,j=mid+1;
    int a[];
    int k=0;
    while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i+;
            k++;
        }else{
            temp[j]=arr[j];
            j++;
            k++;
        }
    }

}
int main(){

}