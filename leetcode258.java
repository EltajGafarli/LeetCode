// recursion

class Solution {
    public int addDigits(int num) {
      int s = 0;
      while(num > 0){
        s += num % 10;
        num /= 10;
      }
      num = s;
      if(num < 10) return num;
      return addDigits(num);
    }
}
