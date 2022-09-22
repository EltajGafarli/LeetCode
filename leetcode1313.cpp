class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
      vector<int>ans;
      for(int i = 0; i < nums.size(); i ++){
        if(i % 2 == 1){
          int freq = nums[i - 1];
          int val = nums[i];
          for(int j = 0; j < freq; j ++){
            ans.push_back(val);
          }
        }
      }
      return ans;
    }
};
