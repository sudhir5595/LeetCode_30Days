class Solution {
public:
    vector <int> binary_conv(int n){
        vector <int> res(32,0);
        vector <int> temp;
        while(n > 0){
            temp.push_back(n%2);
            n = n/2;
        }
        reverse(temp.begin(), temp.end());
        for(int i = 0; i<temp.size(); i++){
            res[32-temp.size()+i] = temp[i];
        }
        return res;
    }
    
    int rangeBitwiseAnd(int m, int n) {
        long long ans = 0;
        vector <int> v1;
        vector <int> v2;
        v1 = binary_conv(m);
        v2 = binary_conv(n);
        vector <int> res;
        int temp = 0;
        for(int i = 0; i<32; i++){
            if(v1[i] == v2[i]){
                res.push_back(v1[i]);
                temp = 31 - i;
            }
            else{
                break;
            }
        }
        long long temp1 = 1;
        for(int i = 0; i<temp; i++){
            temp1 = temp1*2;
        }
        for(int i = res.size() - 1; i>=0; i--){   
            ans += temp1*res[i];
            temp1 = temp1*2;
        }
        return ans;
    }
};
