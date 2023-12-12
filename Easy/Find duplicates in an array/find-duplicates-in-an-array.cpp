//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        
        // code here
        vector<int> list;
        vector<int> listOther;
        for(int i=0;i<n;i++){
            list.push_back(arr[i]);
        }
        
        sort(list.begin(),list.end());
         
        int count = 0;
        for(int i=0;i<n;i++){
            if(i<n-1){
                if(list.at(i) ==list.at(i+1) ){
                    count++;
                }
                else{
                    if(count>0){
                       listOther.push_back(list[i]);
                       count=0;
                    }
                }
            }
            else{
                //cout<<list[i];
                 if(count>0){
                   listOther.push_back(list[i]);
                   count=0;
                }
            }
         }
        
        if(listOther.empty())
            listOther.push_back(-1);
        
        return listOther;
    }
        
        
        // code here
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends