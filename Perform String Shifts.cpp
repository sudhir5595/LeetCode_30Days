class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        string res;
        for(int i=0;i<shift.size(); i++){
            vector <int> buffer;
            buffer = shift[i];
            if(buffer[0] == 0){
                int count = buffer[1];
                if(count != 0 && count != s.size()){
                    string s1 = s.substr(0, count%s.size());
                    cout << s1 << endl;
                    string s2 = s.substr(count%s.size(), s.size()-1);
                    cout << s2 << endl;
                    s = s2 + s1;
                    // cout << s << endl;
                }
            }
            else{
                int count = buffer[1];
                if(count != 0 && count != s.size()){
                    string s1 = s.substr(s.size() - count%s.size(), s.size()-1);
                    // cout << s1 << endl;
                    string s2 = s.substr(0, s.size()- count%s.size());
                    // cout << s2 << endl;
                    s = s1 + s2;
                }
            }
        }
        return s;
    }
};
