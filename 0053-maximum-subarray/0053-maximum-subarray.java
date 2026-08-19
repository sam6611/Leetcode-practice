class Solution {
    public int maxSubArray(int[] nums) {
        int currsum=0;int n=nums.length;
        int maxsum=nums[0];
        
        for(int i=0;i<n;i++){
            
            currsum=Math.max(nums[i],currsum+nums[i]);
            maxsum=Math.max(maxsum,currsum);
            // if(currsum<0) currsum=0;
        }
        
        return maxsum;
    }
}