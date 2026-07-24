class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAXX = 2048;

        vector<bool> present(MAXX, false);

        for (int x : nums)
            present[x] = true;

        vector<int> values;
        for (int i = 0; i < MAXX; i++) {
            if (present[i])
                values.push_back(i);
        }

        vector<bool> pairXor(MAXX, false);

        // All possible XORs of two values
        for (int a : values) {
            for (int b : values) {
                pairXor[a ^ b] = true;
            }
        }

        vector<bool> ans(MAXX, false);

        // XOR each pair result with a third value
        for (int p = 0; p < MAXX; p++) {
            if (!pairXor[p]) continue;
            for (int c : values) {
                ans[p ^ c] = true;
            }
        }

        int count = 0;
        for (bool x : ans)
            if (x) count++;

        return count;
    }
};