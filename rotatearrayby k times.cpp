#include<iostream>
#include<algorithm>

using namespace std;
//using extra space using extra vector and rotating array rightside k times use (i+k)%n
// for rotaing array elements leftside use (i+k+1)%n 

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int a[n];
    int k;
    cout<<"k value";
    cin>>k;
    cout<<"array elements";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ab[n];
    for(int i=0;i<n;i++){
        ab[(i+k)%n]=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<ab[i];
    }
system("pause");
}

    
