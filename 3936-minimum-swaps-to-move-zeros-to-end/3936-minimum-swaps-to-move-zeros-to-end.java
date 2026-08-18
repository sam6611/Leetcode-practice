class Solution {
    public int minimumSwaps(int[] nums) {
        int n=nums.length; int count=0;
        int left=0;int right=n-1;
        while(left<right){
            if(nums[right]==0){
                right--;
            }
            else if(nums[left]==0 && nums[right]!=0){
                count++;
                right--;
                left++;
            }
            else left++;

        }
        return count;
    }
}