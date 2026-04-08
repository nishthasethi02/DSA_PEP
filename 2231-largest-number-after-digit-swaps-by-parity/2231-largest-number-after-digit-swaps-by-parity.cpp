class Solution {
public:
    int largestInteger(int num) {
        vector<int> digits;
        
        // Extract digits
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        
        // Separate even and odd
        vector<int> even, odd;
        for (int d : digits) {
            if (d % 2 == 0) even.push_back(d);
            else odd.push_back(d);
        }
        
        // Sort descending
        sort(even.begin(), even.end(), greater<int>());
        sort(odd.begin(), odd.end(), greater<int>());
        
        int i = 0, j = 0;
        int result = 0;
        
        // Reconstruct number
        for (int k = digits.size() - 1; k >= 0; k--) {
            result *= 10;
            if (digits[k] % 2 == 0) {
                result += even[i++];
            } else {
                result += odd[j++];
            }
        }
        
        return result;
    }
};