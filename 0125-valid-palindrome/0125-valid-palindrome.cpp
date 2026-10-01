class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        int left = 0;
        while(left < s.length()){
            if(isalnum(s[left])){
                str += tolower(s[left]);
            }
            left++;
        }
        left = 0;
        int right = str.length() - 1;
        while(left < right){
            if(str[left] != str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};