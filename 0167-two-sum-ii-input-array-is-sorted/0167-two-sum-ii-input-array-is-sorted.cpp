class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> res;
        int left=0, right=n-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=numbers[left]+numbers[right];
            if(sum==target){
                return {left+1,right+1};
            }
            else if(sum>target){
                right--;
            }
            else{
                left++;
            }
        }
        return {};
    }
};