class Solution {
public:
    bool isvowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int currcount = 0;
        int maxcount = 0;

        for(int i = 0; i < k; i++){
            if(isvowel(s[i])){
                currcount++;
            }
        }
        maxcount = currcount;

        for(int i = k; i < s.length(); i++){
            if(isvowel(s[i])){
                currcount++;
            }

            if(isvowel(s[i - k])) {
                currcount--;
            }

            maxcount = max(currcount, maxcount);
        }
        return maxcount;
    }
};