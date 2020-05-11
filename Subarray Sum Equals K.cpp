class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        int n = nums.size();
        int sum = 0;
        unordered_map <int, int> mp;
        mp[sum]++;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            int need = sum - k;
            res += mp[need];
            mp[sum]++;
        }
        return res;
    }
};
