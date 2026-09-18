class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n= grid[0].size();
        int ans =0;
        for(int k=0; k<n; k++){
            int mx=0;
            for(int i=0; i<m; i++){
                int big=0;
                for(int j=0; j<n; j++){
                    if(grid[i][j]>big){
                        big=grid[i][j];
                    }
                }
                if(big>mx){
                    mx=big;
                }
                for(int j=0; j<n; j++){
                    if(grid[i][j] == big){
                        grid[i][j]=0;
                        break;
                    }
                }
            }
            ans=ans+mx;
        }
        return ans;
    }
};