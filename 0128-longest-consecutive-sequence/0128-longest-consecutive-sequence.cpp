class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int longest=1;
        sort(nums.begin(),nums.end());
        if(nums.empty()){
            return 0;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else{
                longest=max(longest,count);
                count=1;
            }
            
        }
        return max(longest,count);
    }
};