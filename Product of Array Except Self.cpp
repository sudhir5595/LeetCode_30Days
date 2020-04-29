class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> res(n);
        vector <int> arr1(n);
        vector <int> arr2(n);
        arr1[0] = nums[0];
        
        for(int i = 1; i<n; i++){
            arr1[i] = arr1[i-1]*nums[i];
        }
        
        arr2[n-1] = nums[n-1];
        
        for(int i = n-2; i>0; i--){
            arr2[i] = arr2[i+1]*nums[i];
        }
        
        res[0] = arr2[1];
        res[n-1] = arr1[n-2];
        
        for(int i = 1; i<n-1; i++){
            res[i] = arr1[i-1]*arr2[i+1];
        }
        return res;
    }
};
