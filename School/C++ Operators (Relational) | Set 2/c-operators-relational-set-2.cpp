//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    string compareNum(int A,int B){
        
            
        string a=to_string(A); 
        string b=to_string(B);
        if(A<B)
            return(a+" is less than "+b);
        else if(A>B)
            return(a+" is greater than "+b);
        else
            return(a+" is equals to "+b);
    }
        // code here 
    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B;
        cin >> A>>B;
        Solution ob;
        cout << ob.compareNum(A,B) << endl;
    }
    return 0; 
} 

// } Driver Code Ends