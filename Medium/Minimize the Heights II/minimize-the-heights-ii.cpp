//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
           int i;
        sort(arr,arr+n);
        int ans = arr[n-1] - arr[0];
        int maxi,mini;
        for(int i = 1; i < n ; i++){
            maxi = max(arr[n-1]-k , arr[i-1] + k);
            mini = min(arr[0] + k, arr[i] - k);
            if(mini<0){
                continue;
            }
            ans = min(ans,maxi-mini);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends