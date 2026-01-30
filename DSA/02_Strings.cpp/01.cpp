// // Reverse the String
// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str = {"hello"};
//     // for (int i = str.length() - 1; i >= 0; i--){
//     //     cout << str[i];
//     // }

//     int l = 0;
//     int r = str.length() - 1;
//     while (l < r){
//         swap(str[l++], str[r--]);
//     }
//     cout << str << endl;
// }

// // Remove Duplicates
// #include <iostream>  
// #include <vector>
// using namespace std;

// string removeDuplicates(const string &s){
//     vector<bool> visited(256, false); // - Space Complexity O(1) - fixed size array, Time Complexity O(n)
//     string result = "";
//     for (char i : s){
//         if (!visited[i]){
//             result.push_back(i);
//             visited[i] = true;
//         }
//     }
//     return result;
// }
// int main(){
//     cout << removeDuplicates("banana") << endl;
// }

// Valid Anagram
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()){
//             return false;
//         }
//         int arr[26] = {0};

//         for(char i : s){
//             arr[i - 'a']++;
//         }

//         for(char i : t){
//             arr[i - 'a']--;
//             if(arr[i-'a'] < 0){
//                 return false;
//             }
//             return true;
//         }
//     }
// };

// Leetcode 125
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i = 0 ,j=n-1;
        
        // transform(s.begin(), s.end(), s.begin(), ::tolower);

        while(i<j)
        {
            if(!isalnum(s[i]))
                i++;
            else if(!isalnum(s[j]))
                j--;
            else if(tolower(s[i])!=tolower(s[j]))
                return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
}; // Time Complexity: O(n) - because we traverse the string once, Space Complexity: O(1)
int main(){
    Solution obj;
    string s = "A man, a plan, a canal: Panama";    
    cout << obj.isPalindrome(s) << endl;
}