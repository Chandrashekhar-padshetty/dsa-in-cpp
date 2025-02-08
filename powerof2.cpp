#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     if(n<=0) return false;// integer range may exceed carefully so use this otherwise n-1 exceed 2power -31
        
    else if((n&(n-1))==0) cout<<"true";
    else cout<<"false";
    system("pause");
}