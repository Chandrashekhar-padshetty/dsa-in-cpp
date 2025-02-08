#include<iostream>
#include<algorithm>

using namespace std;
int minBitFlips(int start, int goal) {
       
        int k=start^goal;
        int cnt=0;
        while(k!=0){
            if(k&1==1) cnt++;
            k=k>>1;

        }
        return cnt;
        
    }
int main(){
    int start,end;
    cin>>start>>end;
    cout<<minBitFlips(start,end);
    system("pause");

}