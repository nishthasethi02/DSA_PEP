class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        
        // Step 1: Push all elements into max heap
        for(int x : gifts) {
            pq.push(x);
        }
        
        // Step 2: Perform k operations
        while(k--) {
            int top = pq.top();
            pq.pop();
            
            int newVal = sqrt(top);
            pq.push(newVal);
        }
        
        // Step 3: Calculate sum
        long long sum = 0;
        while(!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        
        return sum;
    }
};