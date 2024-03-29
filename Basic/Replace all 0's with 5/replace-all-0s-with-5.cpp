//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
      int result = 0;
    int multiplier = 1;

    while (n > 0) {
        int digit = n % 10;
        if (digit == 0) {
            digit = 5;
        }

        result += digit * multiplier;
        multiplier *= 10;
        n /= 10;
    }

    return result;
   
}


    
