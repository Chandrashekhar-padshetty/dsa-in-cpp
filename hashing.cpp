#include<iostream>
#include<algorithm>
#include<map>
//by array method

using namespace std;

int main(){
    /*
int arr[10]={1,1,2,3,4,5,6,7,9,12};

int a[12]={0};
for(int i=0;i<10;i++)
{
a[arr[i]]++;

}
cout<<"query";
int q;
cin>>q;
cout<<a[q];*/

//hashing using map

int arr[12]={1,2,3,4,5,66,66,77,123,1,2,3};
map<int,int>mp;
for(int i=0;i<12;i++){
    mp[arr[i]]++;
}
cout<<"query";
int q;
cin>>q;
cout<<mp[q];
system("pause");





}