class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector <int> temp;
        int count_zero = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                count_zero++;
            }
            else{
                nums[i - count_zero] = nums[i];    
            }
        }
        for(int i = nums.size() - count_zero; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
