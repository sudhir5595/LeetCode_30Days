class Solution {
public:
    
    string remove(string S){
        string res;
        stack <int> st;
        for(int i = 0; i<S.size(); i++){
            if(S[i] != '#'){
                st.push(S[i]);
            }
            else{
                if(st.size() != 0){
                    st.pop();
                }
            }
        }
        while(st.size() != 0){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
    
    
    
    bool backspaceCompare(string S, string T) {
        string temp = remove(S);
        string temp1 = remove(T);
        if(temp == temp1){
            return 1;
        }
        return 0;
    }
};
