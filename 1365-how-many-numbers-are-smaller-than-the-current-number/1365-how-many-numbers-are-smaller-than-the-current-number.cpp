class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // Make a copy of the original array
        vector<int> sorted = nums;

        // Sort the copied array
        sort(sorted.begin(), sorted.end());

        // Store the first occurrence of each number
        unordered_map<int, int> mp;

        for (int i = 0; i < sorted.size(); i++) {
            if (mp.find(sorted[i]) == mp.end()) {
                mp[sorted[i]] = i;
            }
        }

        // Build the answer
        vector<int> ans;

        for (int num : nums) {
            ans.push_back(mp[num]);
        }

        return ans;
    }
};