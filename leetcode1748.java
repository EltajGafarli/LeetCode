class Solution {
    public int sumOfUnique(int[] nums) {
      HashMap<Integer,Integer>map = new HashMap<>();
      int sum = 0;
      for(int i = 0;i<nums.length;i++){
        if(!map.containsKey(nums[i])){
          map.put(nums[i],1);
          sum += nums[i];
        }else{
          map.put(nums[i],map.get(nums[i]) + 1);
          if(map.get(nums[i]) == 2){
            sum -= nums[i];
          }
        }
      }
      return sum;
    }
}
