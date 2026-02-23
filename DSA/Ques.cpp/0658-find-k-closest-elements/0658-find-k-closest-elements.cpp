class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // closest -> max heap (because mininmum values neeche rh jaengi aur greater 
        // values nikl jaengi)
        priority_queue<pair<int, int>> maxHeap;

        for(int i : arr){
            int dis = abs(i - x);
            maxHeap.push({dis, i});

            if(maxHeap.size() > k){
                maxHeap.pop();
            }
        }
        
        vector<int> result;
        while(!maxHeap.empty()){
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        sort(result.begin(), result.end());
        return result;
    }
};