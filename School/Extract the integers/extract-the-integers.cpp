//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{  string str;
    vector<string>v;
    for(int i=0;i<s.length()+1;i++){

        if(s[i]>='0' && s[i]<='9'){
            str=str+s[i];
        }
        
        else{
            if(str.length()!=0){
            v.push_back(str);}
            str="";
        }
    }
    
    return v;
    }
    
    
    // code here
