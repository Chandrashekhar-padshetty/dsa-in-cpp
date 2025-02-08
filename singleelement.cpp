#include<iostream>
#include<algorithm>
#include<map>

using namespace std;
int main(){
    int ans;
    int arr[6]={1,1,2,2,2,4};
    map<int,int>mp;
    for(int i=0;i<6;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<6;i++){
        if(mp[arr[i]]==1)
        ans=arr[i];
    }
    cout<<"answer is ";
    cout<<ans;
    system("pause");

    
}