class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int count = 0;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                if(count > 0){
                    ans += s[i];
                }
                count++;
            }else{
                count--;
                if(count > 0){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};