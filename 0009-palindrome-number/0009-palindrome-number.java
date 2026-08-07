class Solution {
    public boolean isPalindrome(int x) {
        int ans;
        int res=0;
        int original=x;
        if(x<0) return false;
        while(x!=0){
            ans=x%10;
            res=res*10+ans;
            x=x/10;
        }
        if(res==original) return true;
        else return false;
        // return res;
    }
}