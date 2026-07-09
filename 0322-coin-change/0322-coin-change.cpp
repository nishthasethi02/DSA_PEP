class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& coins, int amount) {
        if (amount == 0)
            return 0;
        if (amount < 0)
            return INT_MAX;
        if (dp[amount] != -1)
            return dp[amount];
        int mini = INT_MAX;
        for (int coin : coins) {
            int ans = solve(coins, amount - coin);
            if (ans != INT_MAX)
                mini = min(mini, ans + 1);
        }
        dp[amount] = mini;
        return dp[amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        dp.resize(amount + 1, -1);
        int ans = solve(coins, amount);
        return (ans == INT_MAX) ? -1 : ans;
    }
};