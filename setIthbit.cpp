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
    ex:13=1101
    for seting i th bit we have to do (1<<i) than | operation with given n
    1101
    i=1
    1101
   |   10
   1111
    */
   int m=(1<<i);
   cout<<(n|m);
   system("pause");

}