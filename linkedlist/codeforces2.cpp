#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t,ans;
    cin >> t;
    vector<int> v;

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;

        vector<string> st(n);
        for (int j = 0; j < n; j++) {
            cin >> st[j];
        }

        // Check if the first string exceeds the maximum allowed length
        if (st[0].length() > m) {
            v.push_back(0);
            
        } else{
            int cnt;
            int k=0;
            
            for(int i=0;i<n;i++){
                cnt=0;
                for(int j=0;j<st[i].size();j++){
                    if(cnt<=m) {
                        k=1;
                        ans=i+1;
                        break;
                    }
                    cnt++;
                }
                if(k==1) break;
            }
            

            
            
        }
        v.push_back(ans);
    }
        
        

    

        // Default value if no valid result is found
        
        

    // Output results
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    system("pause");
    return 0;
}

    