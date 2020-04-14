class Solution {
public:
    bool isHappy(int n) {
        unordered_map <int, int> mp;
        mp[n]++;
        int temp = 0;
        while(temp == 0){
            long long sum = 0;
            while(n > 0){
                sum += (n%10)*(n%10);
                n = n/10;
            }
            // cout << sum << endl;
            if(sum == 1){
                return 1;
            }
            n = sum;
            auto it = mp.find(n);
            if(it != mp.end()){
                temp = 1;
            }
            mp[n]++;
        }
        return 0;
    }
};
