class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size(); int ind;
        int max_elt=INT_MIN;
        int sec_max=INT_MIN;
        for(int i=0;i<n;i++){
            if(max_elt<nums[i]){
                sec_max=max_elt;
                max_elt=nums[i];
                ind=i;
            }
            else if(nums[i]>sec_max && nums[i]<max_elt){
                sec_max=nums[i];
            }
        } 
        return (max_elt>=2*sec_max) ? ind : -1; 
    }
};