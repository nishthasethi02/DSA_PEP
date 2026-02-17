class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26, 0);

        for(int i  = 0 ; i < s.size(); i++){
            freq[s[i] - 'a']++;
        }

        int  reference = -1;

        for(int i = 0; i < 26; i++){
            if(freq[i] > 0){
                if(reference == -1){
                    reference = freq[i];
                }
                else if(freq[i] != reference){
                    return false;
                }
            }
        }    
        return true;
    }
};