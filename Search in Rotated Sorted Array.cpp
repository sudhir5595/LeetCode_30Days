class Solution {
public:
    
    int binary_search(vector<int>& nums, int num1, int start, int end){
        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid] == num1){
                return mid;
            }
            else if(nums[mid] > num1){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }
    
    int find_dip(vector<int>& nums){
        int start = 0;
        int end = nums.size() - 1;
        if(nums[0] < nums[nums.size() - 1]){
            return nums.size();
        }
        if(nums[0] > nums[1]){
            return 1;
        }
        if(nums[nums.size() - 2] > nums[nums.size() - 1]){
            return nums.size() - 1;
        }
        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid-1] > nums[mid] && nums[mid+1] > nums[mid]){
               return  mid;
            }
            else if(nums[0] < nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int res = 0;
        if(nums.size() <= 4){
           for(int i = 0; i<nums.size(); i++){
               if(nums[i] == target){
                   return i;
               }
           }
            return -1;
        }
        int dip_point = find_dip(nums);
        // cout << dip_point << endl;
        int temp1 = binary_search(nums,target, 0, dip_point - 1);
        if(temp1 != -1){
            return temp1;
        }
        int temp2 = binary_search(nums, target, dip_point, nums.size() - 1);
        if(temp2 != -1){
            return temp2;
        }
        return -1;
    }
};
