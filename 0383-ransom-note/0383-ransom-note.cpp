class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for(int x : magazine){
            mp[x]++;
        }
        for(int i : ransomNote){
            mp[i]--;
            if(mp[i] < 0){
                return false;
            }
        }
        return true;
    }
};