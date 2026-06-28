class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int netgain=0; int res=INT_MIN;
        for(int i=0;i<n;i++){
            netgain+=gain[i];
            res=max(res,netgain);
        }
        if(res<=0){
            return 0;
        }
        else return res;
    }
};