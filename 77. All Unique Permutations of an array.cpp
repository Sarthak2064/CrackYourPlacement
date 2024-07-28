//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void fun(int i,int n,vector<int>&arr,vector<int>&ta,vector<vector<int>>&ans)
  {
      if(i==n)
      {
          ans.push_back(ta);
          return ;
      }
      vector<int>::iterator it;
      int l=INT_MIN;
      for(it=arr.begin();it!=arr.end();it++)
      {   
          if(*it==l)
          {
              continue;
          }
          else{
          int t=*it;
          ta.push_back(*it);
          arr.erase(it);
          fun(i+1,n,arr,ta,ans);
          arr.insert(it,t);
          ta.pop_back();
          l=t;
          }
      }
      
      
  }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<int>ta;
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
         fun(0,n,arr,ta,ans);
         return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends