class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach=0 ,n=nums.size();
        for(int i=0;i<n;i++){
            if(reach<i){
                return false;
            }
            else{
                reach=max(reach,nums[i]+i);
            }
        }
        return true;
    }
};