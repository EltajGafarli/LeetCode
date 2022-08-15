class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
      List<Integer>dissapear = new ArrayList<>();
      HashMap<Integer,Integer>map = new HashMap<>();
      for(int i = 0;i<nums.length;i++){
        if(!map.containsKey(nums[i])){
          map.put(nums[i],1);
        }
      }
      for(int i = 1;i <= nums.length;i++){
        if(!map.containsKey(i)){
          dissapear.add(i);
        }
      }
      return dissapear;
    }
}
