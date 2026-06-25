class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<vector<int>> que;
        int n=matrix.size();
        int m=matrix[0].size();
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    que.push({i,j});
                }
            }
         }
         while(!que.empty()){
            vector<int> curr = que.front();
            que.pop();

            int row=curr[0];
            int col=curr[1];

            for(int i=0;i<m;i++){
                matrix[row][i]=0;
            }
            for(int j=0;j<n;j++){
                matrix[j][col]=0;
            }
         }
    }
};