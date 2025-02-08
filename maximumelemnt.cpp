#include<iostream>
#include<algorithm>

using namespace std; //sorting using max variable time comple4xity o(n)
int main(){
   /*int n;
    cout<<"enter n value";
    cin>>n;
    int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=0;
    for(int i=1;i<n;i++){
        if(a[max]<a[i]){
            max=i;
        }
    }
    cout<<"maximum elements"<<a[max];
    system("pause");*/ 
    // by using sort
int n;
    cout<<"enter n value";
    cin>>n;
    int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);  //sorting array using stl
    cout<<"largest element is"<<a[n-1];
    system("pause");


}