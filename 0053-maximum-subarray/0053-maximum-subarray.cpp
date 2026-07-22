class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            cursum=max(nums[i],nums[i]+cursum);
            maxsum=max(maxsum, cursum);
            if(maxsum<0){
                cursum=0;
            }
        }
        return maxsum;
    }
};