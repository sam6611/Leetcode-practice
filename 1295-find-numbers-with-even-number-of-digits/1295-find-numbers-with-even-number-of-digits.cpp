class Solution {
public:

    int digits(int n){

        int cnt=0;

        while(n){
            cnt++;
            n/=10;
        }

        return cnt;
    }

    int findNumbers(vector<int>& nums) {

        int ans=0;

        for(int x:nums){

            if(digits(x)%2==0)
                ans++;
        }

        return ans;
    }
};