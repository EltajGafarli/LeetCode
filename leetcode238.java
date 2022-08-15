class Solution {
    public int[] productExceptSelf(int[] nums) {
      int count_of_zero = 0;
      int product_without_zero = 1;
      boolean zero = false;
      for(int i = 0;i<nums.length;i++){
        if(nums[i] == 0){
          zero = true;
          count_of_zero ++;
          if(count_of_zero == 2){
            break;
          }
        }else{
          product_without_zero *= nums[i];
        }
      }
      for(int i = 0;i<nums.length;i++){
        if(count_of_zero == 2){
          nums[i] = 0;
        }else{
          if(zero){
            if(nums[i] != 0){
              nums[i] = 0;
            }else{
              nums[i] = product_without_zero;
            }
          }else{
            nums[i] = product_without_zero/nums[i];
          }
        }
      }
      return nums;
    }
}
