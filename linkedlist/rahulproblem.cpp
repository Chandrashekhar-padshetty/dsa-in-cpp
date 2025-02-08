#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    int noofdistinct(int l1,int n,vector<int>v){
    set<int>st;
    for(int i=l1-1;i<n;i++) st.insert(v[i]);
    
    return st.size();

   
}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  
    vector<int>v1(m);
    for(int j=0;j<v1.size();j++){
        cin>>v1[j];

    }
    for(int k=0;k<m;k++){

        int c=noofdistinct(v1[k],n,v);
        cout<<c<<endl;
        
        

    }
    system("pause");

}