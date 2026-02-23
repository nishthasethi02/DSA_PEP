class Solution {
public:
    string st(string s){
        string ans = "";
        for(char c : s){
            if(c == '#'){
                if(!ans.empty()){
                    ans.pop_back();
                }
            }else{
                ans.push_back(c);
            }
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        if(st(s) == st(t)){
            return true;
        }
        else{
            return false;
        }
    }
};