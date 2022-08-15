class Solution {
    public int[] plusOne(int[] digits) {
      int one = 1;
      int curr = 0;
      int size = digits.length;
      for(int i = size - 1;i>=0;i --){
        curr = digits[i] + one;
        if(curr >= 10){
          digits[i] = curr%10;
          one = 1;
        }else{
          digits[i] = curr;
          one = 0;
        }
      }
      if(one == 1){
        int[] arr = new int[digits.length + 1];
        arr[0] = 1;
        return arr;
      }
      return digits;
    }
}
