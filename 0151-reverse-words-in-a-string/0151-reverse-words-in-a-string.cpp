class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<string> words;
        string word = "";
        for(int i = 0; i < n; i++){
            if(s[i] != ' '){
                word += s[i];
            }else{
                if(word != ""){
                    words.push_back(word);
                    word = "";
                }
            }
        }
        if(word != ""){
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string ans = "";
        for(int i = 0; i < words.size(); i++){
            if(i > 0){
                ans += " ";
            }
            ans += words[i];
        }
        return ans;
    }
};