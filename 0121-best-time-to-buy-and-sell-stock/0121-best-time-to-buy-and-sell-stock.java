class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int maxprofit=Integer.MIN_VALUE;
        int profit=0;
        int buy=prices[0];
        for(int i=0;i<n;i++){
            buy=Math.min(buy,prices[i]);
            profit=prices[i]-buy;
            if(profit>maxprofit){
                maxprofit=profit;
            }
        }
        return maxprofit;

    }
}