// https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1
// class Solution {
//   public:
//     string firstRepChar(string s) {
//         // code here.
//         string ans = "";
//         vector<bool> seen(256, false);
//         for(char i : s){
//             if(seen[i]){
//                 ans += i;
//                 return ans;
//             }
//             seen[i] = true;
//         }
//         return "-1";
//     }
// }; // - time complexity: O(n) where n is the length of the string s - we traverse the string once, space complexity: O(1) - fixed size array