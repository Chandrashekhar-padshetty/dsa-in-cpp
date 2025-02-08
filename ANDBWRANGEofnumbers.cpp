#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>


using namespace std;
int rangeBitwiseAnd(int left, int right) {
        if(left==right) return left;
        if(left<=1) return 0;
    

        for(int j=1;j<=31;j++){
            if(left>=pow(2,j) && right<pow(2,j+1)) return pow(2,j);

        }
        return 0;


        
    }
int main(){
    int left,right;
    cin>>left>>right;
     cout<<rangeBitwiseAnd(left,right);
     system("pause");



}