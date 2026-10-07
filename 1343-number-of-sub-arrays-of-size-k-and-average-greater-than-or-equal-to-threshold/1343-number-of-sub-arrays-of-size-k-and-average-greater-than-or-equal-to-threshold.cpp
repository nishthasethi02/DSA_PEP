class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0;
        int left = 0;
        int windowsum = 0;
        for(int right = 0; right < n; right++){
            windowsum += arr[right];
            if(right - left + 1 == k){
                if(windowsum >= k * threshold){
                    sum++;
                }
                windowsum -= arr[left];
                left++;
            }
        }
        return sum;
    }
};