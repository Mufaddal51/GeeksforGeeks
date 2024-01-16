//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    bool isVowel(char c)
    {
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I'||
        c=='o' || c=='O'||  c=='u' || c=='U'){
            return 1;
        }
        return 0;
    }
        string modify (string s)
        {
            int st=0;
            int e=s.length()-1;
            while(st<=e){
                if(isVowel(s[st]) && isVowel(s[e])){
                    swap(s[st],s[e]);
                    st++;
                    e--;
                }
                else {
                    if(isVowel(s[st])){
                        e--;
                    }
                    else if(isVowel(s[e])){
                        st++;
                    }
                    else{
                        st++;
                        e--;
                    }
                    
                }
                
            }
            return s;
            //code here.
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends