//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
      string s="";
    map<int,int> mp;
    for(int i=0;i<n;i++) mp[a1[i]]++;
    map<int,bool> np;
    for(int i=0;i<m;i++){
        if(mp.find(a2[i])==mp.end()) return "No";
        if(np[a2[i]]) {
            if(mp[a2[i]]>np[a2[i]]){
                continue;
            }
            return "No";
        }
        else np[a2[i]]= true;
    }
    return "Yes";
    
}