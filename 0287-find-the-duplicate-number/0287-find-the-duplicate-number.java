class Solution {
    public int findDuplicate(int[] nums) {
        HashMap<Integer,Integer> mp = new  HashMap<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(mp.containsKey(num)){
                return num;
            }
            mp.put(num,1);
        }
        return 0;
    }
}