#include<iostream>
#include<algorithm>
#include <limits.h>

using namespace std;
// finding maximum subarray sum
int main(){
    int n;
    cout<<"enter n value";
    cin>>n;
    int arr[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=INT_MIN;
    int cusum=0;
    for(int i=0;i<n;i++){
        cusum+=arr[i];
        maxsum=max(maxsum,cusum);
        if(cusum<0) cusum=0;


    }
    cout<<"maxsum is"<<maxsum;
    system("pause");

}