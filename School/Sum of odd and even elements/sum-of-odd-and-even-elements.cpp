//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int n)
		{ 
		    vector<int>v;
		    int sum=0;
		int odd=0;
		   
	 for(int i=0;i<=n;i++){
	     if(i%2==0){
	         sum=sum+i;
	     }
	     else{
	         odd=odd+i;
	     }
	 }
	v.push_back(odd);
	v.push_back(sum);
	return v;
		        
		        
		    }
		    // Code here

		
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    }
	return 0;
}
// } Driver Code Ends