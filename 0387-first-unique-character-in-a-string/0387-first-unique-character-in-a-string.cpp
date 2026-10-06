class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        for(int i = 0; i < s.length(); i++){
            freq[s[i] - 'a']++;
        }
        for(int x = 0; x < s.length(); x++){
            if(freq[s[x] - 'a'] == 1){
                return x;
            }
        }
        return -1;
    }
};