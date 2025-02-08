#include<iostream>
#include<algorithm>
using namespace std;
int primeornot(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 1;
        }
        return 0;
    }
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    if(primeornot(n)){
        cout<<"not prime number";
    }else{
        cout<<"prime number";
    }
system("pause");

}