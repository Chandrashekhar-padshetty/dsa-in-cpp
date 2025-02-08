#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<bool>v(n+1,1);
    int cnt=0;
    v[0]=0;
    v[1]=0;
    for(int i=2;i<v.size();i++){
        if(v[i]==1){
            cnt++;
            for(int j=i*i;j<=n;j=j+i){
                v[j]=0;

            }

        
        }
    }
    cout<<cnt;
    system("pause");
}
