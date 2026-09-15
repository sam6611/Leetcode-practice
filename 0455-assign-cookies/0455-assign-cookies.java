class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        int left=0;
        int right=0;
        int n=s.length;
        int m=g.length;
        int count=0;
        while(left<m && right<n){
            if(g[left]<=s[right]){
                left++;
                right++;
                count++;

            }
            else{
                right++;
            }
        }
        return count;
    }
}