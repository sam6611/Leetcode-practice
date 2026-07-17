class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1, 0);
        for (int x : nums)
            freq[x]++;

        vector<long long> pairsDiv(mx + 1, 0);
        vector<long long> exact(mx + 1, 0);

        // pairs where both numbers are divisible by d
        for (int d = 1; d <= mx; d++) {
            long long cnt = 0;
            for (int m = d; m <= mx; m += d)
                cnt += freq[m];

            pairsDiv[d] = cnt * (cnt - 1) / 2;
        }

        // inclusion-exclusion
        for (int d = mx; d >= 1; d--) {
            exact[d] = pairsDiv[d];
            for (int m = d + d; m <= mx; m += d)
                exact[d] -= exact[m];
        }

        // prefix counts
        vector<long long> prefix(mx + 1, 0);
        for (int i = 1; i <= mx; i++)
            prefix[i] = prefix[i - 1] + exact[i];

        vector<int> ans;
        ans.reserve(queries.size());

        for (long long q : queries) {
            int g = lower_bound(prefix.begin() + 1, prefix.end(), q + 1) - prefix.begin();
            ans.push_back(g);
        }

        return ans;
    }
};