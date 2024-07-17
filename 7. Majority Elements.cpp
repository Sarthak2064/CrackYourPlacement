class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hashmap;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            hashmap[nums[i]]++;
        }

        for(auto pair : hashmap){
            if(pair.second > nums.size()/2){
                ans = pair.first;
            }
        }
        return ans;
    }
};