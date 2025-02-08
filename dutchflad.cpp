#include<iostream>
#include<algorithm>
using namespace std;
void dutchflag(int arr[],int n){
    int mid=0,low=0;
    int high=n-1;
    while(mid<high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
         else if(arr[mid]==1)
         {
            mid++;

         }   else{
            swap(arr[mid],arr[high]);
            high--;
         }
        
    }
}
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dutchflag(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    system("pause");




    return 0;

}