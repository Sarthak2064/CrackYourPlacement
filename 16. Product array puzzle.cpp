#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        std::vector<long long int> P(n, 1);
        std::vector<long long int> left(n, 1);
        std::vector<long long int> right(n, 1);

        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; ++i) {
            P[i] = left[i] * right[i];
        }

        return P;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long int> arr(n), vec(n);
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr, n);
        
        for(int i = 0; i < n; i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
