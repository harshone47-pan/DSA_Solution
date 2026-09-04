class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int m= matrix.size();
       int n= matrix[0].size(); 
       vector<vector<int>> ans(n,vector<int>(m));
       for(int r=0; r<m; r++){
        for(int c=0; c<n; c++){
            ans[c][r]=matrix[r][c];
        }
       }
       return ans;
    }
};