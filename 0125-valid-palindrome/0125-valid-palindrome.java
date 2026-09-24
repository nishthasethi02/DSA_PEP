class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        String rev = "";
    for(int i = 0; i < s.length(); i++){
        if(Character.isLetterOrDigit(s.charAt(i))){
            rev += s.charAt(i);
        }
    }
    int left = 0;
    int right = rev.length() - 1;
    while(left < right){
        if(rev.charAt(left)!=rev.charAt(right)){
            return false;
        }
        left++;
        right--;
    }
    return true;
    }
}