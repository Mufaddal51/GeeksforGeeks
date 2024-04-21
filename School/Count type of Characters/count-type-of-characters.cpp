//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            
            vector<int> ans;
            int up=0;
            int lc=0;
            int num=0;
            int sp=0;
            
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    up++;
                }
                else if(s[i]>='a' && s[i]<='z')
                {
                    lc++;
                }
                else if(s[i]>='0' && s[i]<='9')
                {
                    num++;
                }
                else
                {
                    sp++;
                }
            }
            ans.push_back(up);
            ans.push_back(lc);
            ans.push_back(num);
            ans.push_back(sp);
            return ans;
        }
    
            //code here.
        
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends