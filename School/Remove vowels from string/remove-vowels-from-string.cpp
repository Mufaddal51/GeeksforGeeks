//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	 bool isVowel(char c)
    {
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I'||
        c=='o' || c=='O'||  c=='u' || c=='U'){
            return 1;
        }
        return 0;
    }
		
	string removeVowels(string S) 
	{ string ans="";
	 for(int i=0;i<S.length();i++){
	     if(!isVowel(S[i])){
	         ans+=S[i];
	     }
	 }return ans;
	    // Your code goes here
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends