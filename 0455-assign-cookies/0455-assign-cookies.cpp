class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int left=0;
        int right=0;
        int n=g.size(); int m=s.size();
        int count=0;
        while(left<n && right<m){
            if(s[right]>=g[left]){
                right++;
                left++;
                count++;
            }
            else right++;
        }
        return count;
    }
};