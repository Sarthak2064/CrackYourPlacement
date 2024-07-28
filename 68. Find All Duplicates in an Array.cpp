class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int a=(nums[i]-1)%n;
            nums[a]+=n;
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if((nums[i]-1)/n>1)
            {
                v.push_back(i+1);
            }
        }
        return v;
    }
};