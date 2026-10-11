class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        vector<char> chars;
        for(auto x : freq){
            chars.push_back(x.first);
        }
        sort(chars.begin(), chars.end(), [&](char a, char b){
            return freq[a] > freq[b];
        });
        string ans = "";
        for(char c : chars){
            ans += string(freq[c], c);
        }
        return ans;
    }
};