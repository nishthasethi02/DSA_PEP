class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> seen(26,false);
        for(int i = 0; i < sentence.size(); i++){
            char c = sentence[i];
            seen[c - 'a'] = true;
        }
        for(int i = 0; i < 26; i++){
            if(seen[i] == false){
                return false;
            }
        }
        return true;
    }
};