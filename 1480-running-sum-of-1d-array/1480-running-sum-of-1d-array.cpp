class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int res=nums[0];
        ans.push_back(res);
        for(int i=1;i<nums.size();i++){
            res+=nums[i];
            ans.push_back(res);
        }
        return ans;
    }
};