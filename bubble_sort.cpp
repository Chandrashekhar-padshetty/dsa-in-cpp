#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
  }
  cout<<"array elemnts are";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }


system("pause");


}