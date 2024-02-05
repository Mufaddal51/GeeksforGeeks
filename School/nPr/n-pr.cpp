//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long nPr(int n, int r){
        // code herereturn (n*r)/r;
    
          long  int c=1;
     long  int a=1;
       int i=1;
        while(i<=n){
         a=a*i;
          i++;
        }
        int j=1;
        int k=n-r;
        while(j<=k){
            c=c*j;
            j++;
        }
        return a/c;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends