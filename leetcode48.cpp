//the best problem 

class Solution {
public:
  void reverseRow(vector<int>&vect){
    int start = 0,end = vect.size() - 1;
    while(start<end){
      swap(vect[start ++],vect[end --]);
    }
    return;
  }
  void reverseRowsOfMatrix(vector<vector<int>>&matrix){
    for(int i = 0; i < matrix.size();i++){
      reverseRow(matrix[i]);
    }
    return;
  }
  void rotateElements(vector<vector<int>>&matrix,int col,int row){
    int end = matrix.size() - 1;
    int start = end;
    while(end > 0 && start > 0){
      swap(matrix[end--][col],matrix[row][start --]);
      if(end == start && row == col && end == col) break;
    }

  }
  void rotate(vector<vector<int>>& matrix) {
    int row = 0,col = 0;
    while(row < matrix.size()-1 && col < matrix.size() - 1){
      rotateElements(matrix,col,row);
      row ++;
      col ++;
    }
    reverseRowsOfMatrix(matrix);
  }
};
