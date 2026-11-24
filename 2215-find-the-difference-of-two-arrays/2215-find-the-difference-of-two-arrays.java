class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        HashSet<Integer> s1 = new HashSet<>();
        HashSet<Integer> s2 = new HashSet<>();

        for(int i = 0; i < nums1.length; i++){
            s1.add(nums1[i]);
        }

        for(int i = 0; i < nums2.length; i++){
            s2.add(nums2[i]);
        }

        ArrayList<Integer> l1 = new ArrayList<>();
        ArrayList<Integer> l2 = new ArrayList<>();

        for(int x : s1){
            if(!s2.contains(x)){
                l1.add(x);
            }
        }

        for(int x : s2){
            if(!s1.contains(x)){
                l2.add(x);
            }
        }

        List<List<Integer>> ans = new ArrayList<>();

        ans.add(l1);
        ans.add(l2);

        return ans;
    }
}