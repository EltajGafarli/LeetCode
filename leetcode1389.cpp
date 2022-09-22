class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
      vector<int>ans;
      for(int i = 0;i < index.size();i++){
        ans.insert(begin(ans) + index[i],nums[i]);
      }
      return ans;
    }
};
