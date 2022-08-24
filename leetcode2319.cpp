class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
      bool isZero = true;
      bool isNonZero = true;
      int n = grid.size();
      for(int i = 0;i < n;i ++){
        for(int j = 0; j < n; j ++){
          if(i == j || i + j == n - 1){
            if(grid[i][j] == 0) isNonZero = false;
          }else{
            if(grid[i][j] != 0) isZero = false;
          }
        }
      }
      return isNonZero && isZero;
    }
};
