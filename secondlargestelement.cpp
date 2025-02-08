#include<iostream>
#include<algorithm>

using namespace std; //sorting using max variable time comple4xity o(n)
int main(){
  /* int n;
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
    
    int secondmax=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[max]){
            if(a[secondmax]<a[i]){
                secondmax=i;
            }
        }else{
            secondmax++;
        }
        
        
    }
    cout<<a[secondmax];*/
    //by using sort technique
    int n;


    cout<<"enter n value";
    cin>>n;
    int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    for(int i=n-2;i>=0;i--){
        if(a[i]!=a[n-1]){
            cout<<a[i];
            break;
        }
    }





    system("pause");

}