#include<iostream>
#include<algorithm>
using namespace std;
int moores(int arr[],int n){
    //majority element >n/2 if exists 
    int cnt=0,element,ans;
    for(int i=0;i<n;i++){
        if(cnt==0){
            ans=arr[i];
            element=arr[i];


        }
        if(arr[i]==element){
            cnt++;
        }
        else{
            cnt--;
        }
    } 
    return ans;
   
    
    
    
}
 int main(){
    int n;
    cout<<"size of array";
    cin>>n;
    int arr[n];
    cout<<"array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=moores(arr,n);
    
        cout<<c;
    
    system("pause");
    return 0;

}