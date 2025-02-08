#include<iostream>
#include<algorithm>
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<" enter number of elements in array";
    cin>>n;
    int arr[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    system("pause");
    return 0;
}