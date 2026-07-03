class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int res=0;
        for(int i=0;i<n;i++){
            res+=nums[i];
            ans.push_back(res);
        }
        return ans;
    }
};