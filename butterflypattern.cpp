#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=2*n-2;
    int s=m;
    int h=2;
    for(int i=0;i<n;i++){
        //upper part
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<m;j++){
            cout<<" ";
        }
        m=m-2;
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;

    }//below part
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<"*";
        }
        
        for(int j=0;j<h;j++){
            if(h<=s){
                cout<<" ";
            }else{
                break;
            }
        }
            h=h+2;

        
        
        for(int j=0;j<n-1-i;j++){
            cout<<"*";
        }

        

    
    cout<<endl;
}
system("pause");

return 0;
}