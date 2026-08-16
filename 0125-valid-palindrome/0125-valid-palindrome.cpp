class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(char c : s){
            if(isalnum(c)){
                temp += tolower(c);
            }
        }
        int i = 0;
        int j = temp.size() - 1;
        while(i < j){
            if(temp[i] != temp[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string temp = "";
//         for(char c : s){
//             if(isalnum(c)){
//                 temp += tolower(c);
//             }
//         }
//         int left = 0;
//         int right = temp.size() - 1;
//         while(left < right){
//             if(temp[left] != temp[right]){
//                 return false;
//             }
//             left++;
//             right--;
//         }
//         return true;
//     }
// };