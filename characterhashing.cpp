#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    //character hashing using array
    string a="aaaaaaabbbbbbbbbssddddkkkk";
    int arr[26]={0};
    for(int i=0;i<a.length();i++){
        arr[a[i]-'a']++;
        


    }
    char c;
    cout<<"query";
    cin>>c;
    cout<<arr[c-'a'];
    system("pause");


}
    