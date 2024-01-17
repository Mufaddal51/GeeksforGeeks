//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cppIntType() {
        int n;
        cin>>n;
        return n;
        // code here
    }
    
    char cppCharType() {
        // code here
        char a;
        cin>>a;
        return a;
    }
    
    float cppFloatType() {
        // code here
        float b;
        cin>>b;
        return b;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}
// } Driver Code Ends