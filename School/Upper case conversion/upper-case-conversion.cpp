//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{ string ans="";
       bool isFirstLetter = true;
    for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' && isFirstLetter)
                {
                    s[i] = toupper(s[i]);
                }
            isFirstLetter = (s[i] == ' ' ? true : false);
        }
        return s;
}