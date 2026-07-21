class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        int i = 0; // pattern 
        int j = 0; // word

        while(j < s.size()){
            string word = "";
            while(j < s.size() && s[j] != ' '){
                word += s[j];
                j++;
            }

            char ch = pattern[i];

            if(mp1.count(ch) && mp1[ch] != word){
                return false;
            }

            if(mp2.count(word) && mp2[word] != ch){
                return false;
            }

            mp1[ch] = word;
            mp2[word] = ch;

            i++;
            j++;
        }
        if(i == pattern.size()){
            return true;
        }
        else{
            return false;
        }
    }
};