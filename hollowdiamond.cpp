#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            //space
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

}