class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row=accounts.size();
        int col=accounts[0].size();
        int maxwealth=0;
        for(int i=0;i<row;i++){
            int wealth=0;
            for(int j=0;j<col;j++){
                wealth+=accounts[i][j];
            }
            maxwealth=max(maxwealth,wealth);
        }
        return maxwealth;
    }
};