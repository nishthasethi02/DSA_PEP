class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string word = "";
        int n = s.length();
        int i = 0;
        while(i < n){
            if(s[i] != ' '){
               word+=s[i]; 
            }
            else{
                reverse(word.begin(), word.end());
                ans += word;
                ans += " ";
                word = "";
            }
            i++;
        }
        reverse(word.begin(), word.end());
        ans += word;
        return ans;
    }
};