class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, n=prices.size(), maxprofit=0;
        int buy=prices[0];
        for(int i=1;i<n;i++){
            if(buy>prices[i]){
                buy=prices[i];
            }
            profit=prices[i]-buy;
            if(maxprofit<profit){
                maxprofit=profit;
            }
        }
        return maxprofit;
    }
};