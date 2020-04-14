class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
       vector <string > temp = strs;
        vector<vector<string>> result;
        unordered_map <string, vector <string> > mp;
        for(int i = 0; i<strs.size(); i++){
            string s1 = strs[i];
            sort(s1.begin(), s1.end());
            mp[s1].push_back(temp[i]);
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            vector <string> buffer;
            buffer = it->second;
            result.push_back(buffer);
        }
        return result;
    }
};
