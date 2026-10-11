class Solution {
public:
    string reverseWords(string s) {
        string word ="";
        string words = "";
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                word += s[i];
            }else{
                if(!word.empty()){
                    reverse(word.begin(), word.end());
                    words += word + " ";
                    word = "";
                }
            }
        }
        if(!word.empty()){
            reverse(word.begin(), word.end());
            words += word;
        }
        if (!words.empty() && words.back() == ' ') {
            words.pop_back();
        }
        return words;
    }
};