class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i : nums){
            freq[i]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>  minHeap;
        
        for(auto i : freq){
            int number = i.first;
            int count = i.second;

            minHeap.push({count, number});

            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        vector<int> result;
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};

