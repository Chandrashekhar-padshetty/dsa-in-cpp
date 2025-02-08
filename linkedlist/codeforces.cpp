#include<iostream>
#include<vector>

using namespace std;
int maximumcoin(int a,int b){
    
    if(a>=b){
        return a;
    }
    else if(b-2*a>0){
        return 0;
    }else{
        int c=b-a;
        return a-c;
    }
}
int main(){
    vector<int>v;

    int n;
    cin>>n;
    int i=0;
    int a,b;
    while( i<n){
        cin>>a>>b;
        v.push_back(maximumcoin(a,b));
        i++;
        



    }
    for(int i:v){
        cout<<i<<endl;
    }

    return 0;
    
}