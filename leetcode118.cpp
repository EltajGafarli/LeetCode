class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>>result = {{1},{1,1}};
      vector<vector<int>>nothing = {{1}};
      if(numRows == 1) return nothing;
      if(numRows == 2) return result;
      numRows -= 2;
      int i = 0;
      while(i < numRows){
        vector<int>temp = {1};
        vector<int>oper = result[result.size() - 1];
        for(int j = 0;j<oper.size() - 1;j++){
          temp.push_back(oper[j] + oper[j + 1]);
        }
        temp.push_back(1);
        result.push_back(temp);
        i++;
      }
      return result;
    }
};
