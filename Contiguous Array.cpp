class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int res = 0;
        unordered_map <int, int> mp;
        mp[0] = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                nums[i] = -1;   // replace "0" with "-1"
            }
            sum += nums[i];
            if(mp.find(sum) != mp.end()){
                res = max(res, i- mp[sum] + 1);
            }
            else{
                mp[sum] = i + 1;
            }
        }
        return res;
    }
};
