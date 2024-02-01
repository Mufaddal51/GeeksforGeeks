//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
          int rem=N%M;
        if(rem==0) return N;
        
        int i=N,j=N;// two variable for forward and backward 
        while(true){
            if(i%M==0)
                return i;
                 i--;//else go backward -ve side
            if(j%M==0)
                return j;
                 j++;   
                 }//else go forward +ve side
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends