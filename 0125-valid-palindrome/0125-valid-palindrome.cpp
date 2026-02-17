class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            if(!isalnum(s[i])){
                i++;
            }
            else if(!isalnum(s[j])){
                j--;
            }
            else if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};