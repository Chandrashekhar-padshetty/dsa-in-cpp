#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    /*
    first we have to find i value means on which bit 1 is present from lsb
    by doing and with 1 at first if got do reverse 
    
    */
   int m=1;
   
   if(n!=0){
   while(1){
    if((n&m)!=0) break;

    
    m=m<<1;


   }
   // for reversing first we have to create (1<<i) and than and with n and negation of mask number(1<<i)
   // ex; 1101 i=2
   // 1<<1= 100=~100=001
   // 1101&001=1001

   cout<<(n&(~m));
   }
   system("pause");
   /*
   or we can do n&(n-1) do get same answer and also by doing n&(n-1) we can find power 2
   if(n&(n-1)==0) yes or NO (power of 2)
   */
}