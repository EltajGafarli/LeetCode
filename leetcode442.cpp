class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int>result;
      for(int i = 0;i<nums.size();i++){
        int n = abs(nums[i]);
        if(nums[n - 1] < 0){
          result.push_back(n);
        }else{
          nums[n - 1] *= -1;
        }
      }
      return result;
    }
};
