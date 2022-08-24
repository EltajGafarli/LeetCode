class Solution {
public:
    long long int getPowerOfTwo(int n){
      long long int power = 1;
      while(power <= n){
        power *= 2;
      }
      return power;
    }
    int rangeBitwiseAnd(int left, int right) {
      int result = left;
      int power = getPowerOfTwo(left);
      if(right > power && left < power) return 0;
      for(long long int i = left; i <= right; i++){
        result &= i;
      }
      return result;
    }
};
