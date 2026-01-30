// https://leetcode.com/problems/koko-eating-bananas/description/

// https://leetcode.com/problems/valid-anagram/description/

// https://leetcode.com/problems/valid-palindrome/

// // https://leetcode.com/problems/valid-palindrome-ii/description/
// class Solution {
// public:
//     bool helperpalindrome(string &s, int left, int right){
//         while(left < right){
//             if(s[left++] != s[right--]){
//                 return false;
//             }
//             return true;
//         }
//     }
//     bool validPalindrome(string s) {
//         int left = 0, right = s.size() - 1;

//         while(left < right){
//             if(s[left] == s[right]){
//                 left++;
//                 right--;
//             }
//             else{
//                 return helperpalindrome(s, left+1, right) || helperpalindrome(s, left, right+1);
//             }
//         }
//         return true;
//     }
// }; // - time complexity: O(n) because we traverse the string once, space complexity: O(1)

// https://leetcode.com/problems/is-subsequence/description/
// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int i = 0, j = 0;
//         int n = s.length();
//         int m = t.length();

//         while(i<n && j<m){
//             if(s[i]==t[j]){
//                 i++;
//             }
//             j++;
//         }
//         return (i == n);
//     }
// }; // - time complexity: O(m) where m is the length of string t - O(m) because we traverse string t once, space complexity: O(1)
