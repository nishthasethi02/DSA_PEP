class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int vowelcount = 0;
        int ans = 0;
        for(int right = 0; right < s.length(); right++){
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){
                vowelcount++;
            }
            if(right - left + 1 == k){
                ans = max(ans, vowelcount);
                if(s[left] == 'a' || s[left] == 'e' ||
                   s[left] == 'i' || s[left] == 'o' ||
                   s[left] == 'u') {
                    vowelcount--;
                }
                left++;
            }
        }
        return ans;
    }
};