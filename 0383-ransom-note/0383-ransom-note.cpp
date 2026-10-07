class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for(int i = 0; i < magazine.length(); i++){
            mp[magazine[i]]++;
        }
        for(auto x : ransomNote){
            if(mp[x] == 0){
                return false;
            }
            mp[x]--;
        }
        return true;
    }
};