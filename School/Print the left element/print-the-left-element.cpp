//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int leftElement(int a[], int n) {
         sort(a,a+n);
        int s=0;
        int e=n-1;
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                e--;
            }
            else{
                s++;
            }
        }
        return a[e];
        
        // Your code goes here   
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.leftElement(a, n) << endl;
    }
}

// } Driver Code Ends