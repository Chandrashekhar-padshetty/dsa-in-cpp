#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    // 
    int n;
    cin>>n;
    int i;
    cin>>i;

    /*
    13=1101
    i=2
    1101
     100// do and of ths than we can predict it is set or not by this we can extract the ith bit
    */
   int mask=(1<<i);
   if(n&mask!=0) cout<<"1";
   else cout<<"0";
   system("pause");


}