#include<iostream>
#include<algorithm>
//lower bound min index where arr[index]>=target
using namespace std;
int main(){
    int arr[5]={1,2,4,4,5};
    int s=0;
    int e=4;
    int target;
    cout<<"target ";
    cin>>target;
    int ans=5;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=target){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    cout<<ans;
    system("pause");
}