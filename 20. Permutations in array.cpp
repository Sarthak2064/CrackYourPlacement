//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        vector<long long> vec_a(a, a + n);
        vector<long long> vec_b(b, b + n);
        
        sort(vec_a.begin(), vec_a.end());
        sort(vec_b.begin(), vec_b.end(), greater<long long>());
        
        for (int i = 0; i < n; ++i) {
            if (vec_a[i] + vec_b[i] < k) {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        Solution ob;
        cout << ob.isPossible(a, b, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends