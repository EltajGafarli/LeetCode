class Solution {
public:
    int minMaxGame(vector<int>& nums) {
      int n = nums.size() / 2;
      if(nums.size() == 1) return nums[0];
      while(n != 0){
        int i = 0;
        while(i < n){
          if(i % 2 == 0){
            nums[i] = min(nums[2*i],nums[2*i + 1]);
            
          }else{
            nums[i] = max(nums[2*i],nums[2*i + 1]);
          }
          i ++;
        }
        n /= 2;
      }
      return nums[0];
    }
};
