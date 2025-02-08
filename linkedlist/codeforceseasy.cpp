#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2,ans=" ";
    cin>>s1>>s2;
    int i=0,j=0;
    while(i<s1.size()&&j<s2.size()){
        ans+=s1[i];
        ans+=s2[i];
        i++;
        j++;
    }
    while(i<s1.size()){
        ans+=s1[i];
        i++;
    }while(j<s2.size()){
        ans+=s2[j];
        j++;
    }
    cout<<ans;
    system("pause");
    
}