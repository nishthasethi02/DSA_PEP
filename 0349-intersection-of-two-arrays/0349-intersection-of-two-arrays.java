class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        HashSet<Integer> set = new HashSet<>();
        for(int i = 0; i < nums1.length; i++){
            set.add(nums1[i]);
        }
        HashSet<Integer> result = new HashSet<>();
        for(int i = 0; i < nums2.length; i++){
            if(set.contains(nums2[i])){
                result.add(nums2[i]);
            }
        }
        int[] ans = new int[result.size()];
        int i = 0;
        for(int num : result){
            ans[i] = num;
            i++;
        }
        return ans;
    }
}