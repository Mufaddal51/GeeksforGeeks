//{ Driver Code Starts
#include<iostream>
#include<string>
using namespace std;

string conCat(string a , string b);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<conCat(a,b)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string conCat(string s1 , string s2)
{
   string ans="";
   for(int i=0;i<s1.length();i++){
       ans+=s1[i];
   }
   for(int j=0;j<s2.length();j++){
       ans+=s2[j];
   }
   return ans;
}
