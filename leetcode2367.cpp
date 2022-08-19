class Solution {
public:
  
  int binary_search(vector<int>nums,int target,int l,int r){
    if(r >= l){
      int mid = (r + l)/2;
      if(nums[mid] == target){
        return mid;
      }
      if(nums[mid] > target){
        return binary_search(nums,target,l,mid - 1);
      }
      if(nums[mid] < target){
        return binary_search(nums,target,mid + 1,r);
      }
    }
    return -1;
  }
  
  int arithmeticTriplets(vector<int>& nums, int diff) {
    int count = 0;
    
    for(int i = 0;i<nums.size();i++){
      int result1 = binary_search(nums,nums[i] - diff,0,nums.size() - 1);
      int result2 = binary_search(nums,nums[i] + diff,0,nums.size() - 1);
      if(result2 != -1 && result1 != -1) count ++;
    }
    return count;
  }
};
