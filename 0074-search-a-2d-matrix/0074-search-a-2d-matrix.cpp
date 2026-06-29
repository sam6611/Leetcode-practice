class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int cur=matrix[i][j];
                if(cur==target) return true;
                else false;
            }
        }
        return false;
    }
};