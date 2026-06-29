class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n,0));
        int top=0, bottom=n-1;
        int left=0, right=n-1;
        int num=1;
        while(num<=n*n){
            for(int i=left;i<=right;i++){
                matrix[top][i]=num++;
            }
            top++;
            for(int j=top;j<=bottom;j++){
                matrix[j][right]=num++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=num++;
                }
                bottom--;
            }
            if(left<=right){

            for(int j=bottom;j>=top;j--){
                matrix[j][left]=num++;
            }
            left++;
            }
        }
        return matrix;

    }
};