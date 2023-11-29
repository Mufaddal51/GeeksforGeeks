//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int N){//56789
        int sum=0;
        while(N!=0){
            int r=N%10;
            sum=sum+r;
             N=N/10;
        }
        return sum;
        
        
        //code here 357 5 6 7 8 9
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends