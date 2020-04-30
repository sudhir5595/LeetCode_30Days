class Solution {
public:
    bool checkValidString(string s) {
        int balance = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '*'){
                balance++;
            }
            else{
                balance--;
                if(balance <= -1){
                    return 0;
                }
            }
        }
        
        balance = 0;
        for(int i = s.size() - 1; i>=0; i--){
            if(s[i] == ')' || s[i] == '*'){
                balance++;
            }
            else{
                balance--;
                if(balance <= -1){
                    return 0;
                }
            }
        }
        return 1;
    }
};
