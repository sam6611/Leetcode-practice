class Solution {
    public boolean containsDuplicate(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(mp.containsKey(num)){
                return true;
            }
            mp.put(num,1);
        }
        return false;
    }
}