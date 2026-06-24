class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=0, count=0, n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                majority=nums[i];
                count++;
            }
            else if(majority==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return majority;
    }
};