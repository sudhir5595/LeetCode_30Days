class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map <int, int> mp;
        int res = 0;
        for(int i = 0; i<nums.size(); i++){
            // mp[nums[i]]++;
            res = nums[i]^res;
        }
        return res;
    }
};
