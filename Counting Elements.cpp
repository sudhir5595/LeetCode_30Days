class Solution {
public:
    int countElements(vector<int>& arr) {
        int res = 0;
        unordered_map <int, int> mp;
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            int temp = it->first;
            int temp2 = it->second;
             if(mp.find(temp + 1) != mp.end()){
                res += temp2;
            }
        }
        return res;
    }
};
