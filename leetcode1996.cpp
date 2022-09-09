class Solution {
public:
    static bool compare(vector<int>&v,vector<int>&v1){
      if(v[0] == v1[0]){
        return v1[1] < v[1];
      }
      return v[0] < v1[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
      sort(begin(properties),end(properties),compare);
      int cnt = 0, curr_max = INT_MIN;
      for(int i = properties.size() - 1; i >= 0 ;i--){
        if(properties[i][1] < curr_max){
          cnt ++;
        }
        curr_max = max(curr_max,properties[i][1]);
      }
      return cnt;
    }
};
