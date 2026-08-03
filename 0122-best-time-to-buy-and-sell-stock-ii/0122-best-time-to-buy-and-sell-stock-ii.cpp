class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxp=0;int profitvalue=0;

        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                profitvalue+=prices[i]-prices[i-1];
            }
        }
        return profitvalue;
    }
};