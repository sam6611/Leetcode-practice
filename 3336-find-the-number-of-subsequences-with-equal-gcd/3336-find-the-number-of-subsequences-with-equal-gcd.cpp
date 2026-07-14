class Solution {
public:
    static const int MOD = 1e9 + 7;

    int memo[205][205][205];
    vector<int> nums;
    int n;

    int dfs(int idx, int g1, int g2) {

        if (idx == n)
            return (g1 == g2 && g1 != 0);

        if (memo[idx][g1][g2] != -1)
            return memo[idx][g1][g2];

        long long ans = 0;

        // Ignore
        ans += dfs(idx + 1, g1, g2);

        // Put in seq1
        int ng1 = (g1 == 0) ? nums[idx] : gcd(g1, nums[idx]);
        ans += dfs(idx + 1, ng1, g2);

        // Put in seq2
        int ng2 = (g2 == 0) ? nums[idx] : gcd(g2, nums[idx]);
        ans += dfs(idx + 1, g1, ng2);

        return memo[idx][g1][g2] = ans % MOD;
    }

    int subsequencePairCount(vector<int>& arr) {
        nums = arr;
        n = nums.size();

        memset(memo, -1, sizeof(memo));

        return dfs(0, 0, 0);
    }
};